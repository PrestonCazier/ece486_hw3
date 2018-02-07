int main(int argc, char* argv)
{
	float x = -1.5e38;
	float y = 1.5e38;
	printf("%f\n", (x + y) + 1.0);
	printf("%f\n", x + (y + 1.0));
}
