int main(void)
{
int i;
for(i=0;i<10;i++)
/* int DONE;
DONE=0 
while(!DONE){}
*/
{
printf("hello, how are you philippe %s \n",__DATE__);

printf("test in file:%s at LINE:%d   binary compiled on : %s at: %s \n ",__FILE__,__LINE__,__DATE__,__TIME__);
}
 /* this is a commented paragraph in C
 */
return 0;
// 0 is normal exit 1 is error 

}
