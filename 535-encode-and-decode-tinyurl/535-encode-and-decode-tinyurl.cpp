class Solution {
public:
    
    // Encodes a URL to a shortened URL.
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
        // while (code.find(key) != code.end()) 
        //     key = getCode();
        code[key] = longUrl;
        url[longUrl] = key;
        return key;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return code[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));