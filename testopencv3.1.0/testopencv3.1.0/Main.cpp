#include<opencv2\opencv.hpp>
using namespace cv;
int main()
{
	Mat picture = imread("game.jpg"); //ͼƬ������ӵ�����Ŀ¼��,Ҳ���Ǻ�Main.cpp�ļ�����һ���ļ�����
	imshow("���Գ���", picture);
	waitKey(20170720);
}
