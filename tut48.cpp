// Example two of virtual in polymorphism:-

#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void dispaly()=0;
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    virtual void dispaly()
    {
        cout << "Class CWHVideo" << endl;
        cout << "Video title is " << title << endl;
        cout << "Rating of video is " << rating << endl;
        cout << "Length of video is " << videolength << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, float wc) : CWH(s, r)
    {
        words = wc;
    }
    virtual void dispaly()
    {
        cout << "Class CWHText" << endl;
        cout << "Text title is " << title << endl;
        cout << "Rating of text is " << rating << endl;
        cout << "No.of words in text is " << words << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "Django Tuturial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title, rating, vlen);
    // djvideo.dispaly();

    cout<<endl;

    title = "Django Tuturial";
    words = 456;
    rating = 4.19;
    CWHText djtext(title, rating, words);
    // djtext.dispaly();

    cout<<endl;

    CWH *tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;

    tuts[0]->dispaly();
    cout<<endl;
    tuts[1]->dispaly();

    return 0;
}