class Solution {
public:
    
    string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    unordered_map<string, string> url,code;
    
    string getCode() {
        string ans = "";
        for (int i = 0; i < 6; i++) 
            ans += characters[rand() % 62];
        return "http://tinyurl.com/" + ans;
    }
    
    string encode(string longUrl) {
        if (url.find(longUrl) != url.end()) 
            return url[longUrl];
        string key = getCode();
        
        code[key] = longUrl;
        url[longUrl] = key;
        return key;
    }


    string decode(string shortUrl) {
        return code[shortUrl];
    }
};

