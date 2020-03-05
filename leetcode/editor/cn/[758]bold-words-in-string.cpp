//
//Given a set of keywords words and a string S, make all appearances of all keyw
//ords in S bold. Any letters between <b> and </b> tags become bold.
// 
//The returned string should use the least number of tags possible, and of cours
//e the tags should form a valid combination.
// 
// 
//For example, given that words = ["ab", "bc"] and S = "aabcd", we should return
// "a<b>abc</b>d". Note that returning "a<b>a<b>b</b>c</b>d" would use more tags, 
//so it is incorrect.
// 
//
// Note: 
// words has length in range [0, 50]. 
// words[i] has length in range [1, 10]. 
// S has length in range [0, 500]. 
// All characters in words[i] and S are lowercase letters. 
// Related Topics 字符串


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    int ideS[500]={0};
public:
    string boldWords(vector<string>& words, string S) {
        string output = "";
        for(unsigned int i=0;i<words.size();i++)
        {
            unsigned int loc =0;
            int ifind = 0;
            while(ifind <S.length())
            {
                loc = S.find( words[i], ifind);
                //cout<<"S is "<<S<<" "<<words[i]<<endl;
                if( loc != string::npos && loc <S.length())
                {
                    for(int j=0;j <words[i].length();j++)
                    {
                        //cout<<"find a substing in "<<loc+j<<endl;
                        ideS[loc+j]=1;
                    }
                    ifind ++;
                }
                else
                {
                    break;
                }
            }
        }
        for(int k=0;k<S.length();k++)
        {
            //cout<< ideS[k] <<endl;
            if(k == 0 && ideS[k] == 1 && ideS[k+1] ==0)
            {
                output.append("<b>");
                output.append(1,S[k]);
                output.append("</b>");
            }
            else if (k == 0 && ideS[k] == 1 && ideS[k+1] ==1)
            {
                output.append("<b>");
                output.append(1,S[k]);
            }
            else if(k == S.length()-1 && ideS[k] == 1 && ideS[k-1] == 0)
            {
                output.append("<b>");
                output.append(1,S[k]);
                output.append("</b>");
            }
            else if(k == S.length()-1 && ideS[k] == 1 && ideS[k-1] == 1)
            {
                output.append(1,S[k]);
                output.append("</b>");
            }
            else if(k>0 && k <S.length() -1 && ideS[k-1] == 0 && ideS[k] == 1 && ideS[k+1] == 0)
            {
                output.append("<b>");
                output.append(1,S[k]);
                output.append("</b>");
            }
            else if(k>0 && k <S.length() -1 && ideS[k-1] == 1 && ideS[k] == 1 && ideS[k+1] == 0)
            {
                output.append(1,S[k]);
                output.append("</b>");
            }
            else if(k>0 && k <S.length() -1 && ideS[k-1] != 1 && ideS[k] == 1 && ideS[k+1] == 1)
            {
                output.append("<b>");
                output.append(1,S[k]);
            }
            else
            {
                output.append(1,S[k]);
            }
        }
        return output;
    }

};
//leetcode submit region end(Prohibit modification and deletion)
