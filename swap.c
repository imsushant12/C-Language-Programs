float volume(void);
main()
{
    float k;
    k=volume();
	printf("Volume is %f",k);
}
float volume()
{
	float v,r;
	printf("enter radius of the sphere: ");
	scanf("%f",&r);
    v=3.14*r*r;
	return(v);
}
