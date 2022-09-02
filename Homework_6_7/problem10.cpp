//classes
#include<iostream>
using namespace std;
class cWindow {
	private:
		int left;
		int right;
		int top;
		int bottom;
	public:
		cWindow() {
			left=10;
			right=20;
			top=5;
			bottom=8;
			cout<<"Initialize default constructor cWindow return left,right,top,bottom ="<<left<<","<<right<<","<<top<<","<<bottom<<endl;
		}
		cWindow(const cWindow &p1) {
			left=p1.left;
			right=p1.right;
			top=p1.top;
			bottom=p1.bottom;
		}
};
class cHint : cWindow {
	private:
		struct tString {
			string n;
		};
		tString sCaption;
	public:
		cHint() {
			sCaption.n="Hello world";
			cout<<"Initialize default constructor cHint return sCaption = "<<sCaption.n<<endl;
		}
};
class cBitButton : cWindow {
	private:
		struct tBitmap {
			int bitmap;
		};
		tBitmap aBitmap;
	public:
		cBitButton() {
			aBitmap.bitmap=103;
			cout<<"Initialize default constructor cBitButton return bitmap = "<<aBitmap.bitmap<<endl;
		}
};
int main() {
	cWindow window;
	cHint hint;
	cBitButton button;
	return 0;
}

