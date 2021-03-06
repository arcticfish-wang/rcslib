/*
*	New C++ File starts here.
*	This file should be named cgtester.cc
*	Automatically generated by NML CodeGen Java Applet.
*	with command line arguments :  HHFile=cgtester.hh dla_length_init=2
*	RCS_VERSION=@(#) RCS_LIBRARY_VERSION: 2009.06.04_1506 Compiled on Fri Jun  5 08:49:50 EDT 2009 for the java platform.
*	$Id: CodeGenCommon.java 1480 2009-05-20 15:19:27Z shackle $
*
*	.gen script :
*		0:load cgtester.hh
*		1:clear
*		2:select_from_file cgtester.hh
*		3:generate C++ protos>cgtester_n_codegen_protos.hh
*		4:generate C++ format>cgtester_n.cc
*
*/

// Include all NML, CMS, and RCS classes and functions
#include "rcs.hh"

// Include command and status message definitions
#include "cgtester.hh"

// Include externally supplied prototypes
#include "cgtester_n_codegen_protos.hh"



#ifndef CGTESTER_NAME_LIST_LENGTH
#define CGTESTER_NAME_LIST_LENGTH 4
#endif

const NMLTYPE cgtester_id_list[CGTESTER_NAME_LIST_LENGTH]= {
	EXAMPLE_MESSAGE_TYPE, /* 0,101 */
	INSIDE_COMMAND_TYPE, /* 1,1001 */
	INSIDE_STATUS_TYPE, /* 3,2001 */
	-1};
const size_t cgtester_size_list[CGTESTER_NAME_LIST_LENGTH]= {
	sizeof(EXAMPLE_MESSAGE),
	sizeof(INSIDE_COMMAND),
	sizeof(INSIDE_STATUS),
	0};


// Enumerated Type Constants

/*
Estimated_size	EXAMPLE_MESSAGE	40192
Estimated_size	INSIDE_COMMAND	40
Estimated_size	INSIDE_COMMAND_BASE	32
Estimated_size	INSIDE_STATUS	144
Estimated_size	INSIDE_STATUS_BASE	136
Estimated_size	mystruct	2480
Estimated_size	MAXIMUM	40192
*/
/*
*	NML/CMS Format function : cgtester_format
*/
int cgtester_format(NMLTYPE type, void *buffer, CMS *cms)
{

	cms->add_array_indexes_to_name=false;
	type = cms->check_type_info(type,buffer,"cgtester",
		(cms_symbol_lookup_function_t) 0,
		(const char **) 0,
		cgtester_id_list,cgtester_size_list,
		CGTESTER_NAME_LIST_LENGTH,
		0);

	switch(type)
	{
	case EXAMPLE_MESSAGE_TYPE:
		((EXAMPLE_MESSAGE *) buffer)->update(cms);
		break;
	case INSIDE_COMMAND_TYPE:
		((INSIDE_COMMAND *) buffer)->update(cms);
		break;
	case INSIDE_STATUS_TYPE:
		((INSIDE_STATUS *) buffer)->update(cms);
		break;

	default:
		return(0);
	}
	return 1;
}

/*
*	NML/CMS Update function for EXAMPLE_MESSAGE
*	from cgtester.hh:133
*/
void EXAMPLE_MESSAGE::update(CMS *cms)
{

	cms->beginClass("EXAMPLE_MESSAGE","NMLmsg");
	cms->beginClassVar("is");
	is.update(cms);
	cms->endClassVar("is");
	cms->next_update_default("10");
	cms->update_with_name("i",i);
	cms->update_with_name("c",c);
	cms->update_with_name("f",f);
	cms->update_with_name("d",d);
	cms->update_with_name("ia",ia,3);
	cms->update_with_name("ca",(char *) ca,3);
	cms->update_with_name("hexdata",(unsigned char *) hexdata,10);
	cms->update_with_name("name",(char *) name,60);
	cms->next_update_default("10");
	cms->update_attribute_with_name("i_attribute",i_attribute);
	cms->update_attribute_with_name("c_attribute",c_attribute);
	cms->update_attribute_with_name("f_attribute",f_attribute);
	cms->update_attribute_with_name("d_attribute",d_attribute);
	cms->update_attribute_with_name("ca_attribute",(char *) ca_attribute,10);
	enumtestvar= (enum enumtest) cms->update_enumeration_with_name("enumtestvar", (int)enumtestvar,(void*)&enumtestvar,0);
	rcsstatus= (enum RCS_STATUS) cms->update_enumeration_with_name("rcsstatus", (int)rcsstatus,(void*)&rcsstatus,0);
	cms->beginEnumerationArray("enumtestvar_array",0,5);
	for(int i_enumtestvar_array=0; i_enumtestvar_array < 5; i_enumtestvar_array++ )
	{
		enumtestvar_array[i_enumtestvar_array] = (enum enumtest)
			cms->update_enumeration_array_elem(enumtestvar_array[i_enumtestvar_array],(void *) &(enumtestvar_array[i_enumtestvar_array]),i_enumtestvar_array);
	}
	cms->endEnumerationArray("enumtestvar_array",0,5);
	cms->update_dla_length_with_name("enumtest_dla_length",enumtest_dla_length);
	cms->beginEnumerationDLA("enumtest_dla",0,enumtest_dla_length,5);
	for(int i_enumtest_dla=0; i_enumtest_dla < enumtest_dla_length && enumtest_dla_length <= 5; i_enumtest_dla++ )
	{
		enumtest_dla[i_enumtest_dla] = (enum enumtest)
			cms->update_enumeration_array_elem(enumtest_dla[i_enumtest_dla],(void *) &(enumtest_dla[i_enumtest_dla]),i_enumtest_dla);
	}
	cms->endEnumerationDLA("enumtest_dla",0,enumtest_dla_length,5);
	cms->next_update_default("5.0");
	cms->update_with_name("fa",(float *) fa,3);
	cms->update_with_name("da",(double *) da,3);
	cms->update_with_name("cart",cart);
	cms->update_with_name("cart_array",(PM_CARTESIAN *) cart_array,3);
	cms->update_with_name("homo",homo);
	cms->update_with_name("homo_array",(PM_HOMOGENEOUS *) homo_array,3);
	cms->update_dla_length_with_name("cda_length",cda_length);
	cms->update_dla_with_name("cda",(char *) cda,cda_length,10);
	cms->update_dla_length_with_name("ida_length",ida_length);
	cms->update_dla_with_name("ida",(int *) ida,ida_length,10);
	cms->update_dla_length_with_name("fda_length",fda_length);
	cms->update_dla_with_name("fda",(float *) fda,fda_length,10);
	cms->update_dla_length_with_name("dda_length",dda_length);
	cms->update_dla_with_name("dda",(double *) dda,dda_length,10);
	cms->update_dla_length_with_name("cart_dynamic_array_length",cart_dynamic_array_length);
	cms->update_dla_with_name("cart_dynamic_array",(PM_CARTESIAN *) cart_dynamic_array,cart_dynamic_array_length,10);
	cms->update_dla_length_with_name("homo_dynamic_array_length",homo_dynamic_array_length);
	cms->update_dla_with_name("homo_dynamic_array",(PM_HOMOGENEOUS *) homo_dynamic_array,homo_dynamic_array_length,10);
	cms->update_dla_length_with_name("ic_dynamic_array_length",ic_dynamic_array_length);
	cms->beginStructDynamicArray("ic_dynamic_array",ic_dynamic_array_length,10);
	for(int i_ic_dynamic_array = 0;i_ic_dynamic_array < ic_dynamic_array_length ;i_ic_dynamic_array++)
	{
		cms->beginStructArrayElem("ic_dynamic_array",i_ic_dynamic_array);
		ic_dynamic_array[i_ic_dynamic_array].update(cms);
		cms->endStructArrayElem("ic_dynamic_array",i_ic_dynamic_array);
	}
	cms->endStructDynamicArray("ic_dynamic_array",ic_dynamic_array_length,10);
	cms->update_unbounded_with_name("cda_unbounded",&cda_unbounded,cda_unbounded_length,cda_unbounded_size_allocated);
	cms->update_unbounded_with_name("ida_unbounded",&ida_unbounded,ida_unbounded_length,ida_unbounded_size_allocated);
	cms->update_unbounded_with_name("fda_unbounded",&fda_unbounded,fda_unbounded_length,fda_unbounded_size_allocated);
	cms->update_unbounded_with_name("dda_unbounded",&dda_unbounded,dda_unbounded_length,dda_unbounded_size_allocated);
	cms->beginStructUnboundedArray("ic_unbounded_array",((void **) &ic_unbounded_array),ic_unbounded_array_length,ic_unbounded_array_size_allocated,sizeof(INSIDE_COMMAND));
	if(0 != ic_unbounded_array)
	{
		for(int i_ic_unbounded_array=0; i_ic_unbounded_array < ic_unbounded_array_length && i_ic_unbounded_array < ic_unbounded_array_size_allocated ; i_ic_unbounded_array++)
		{
			cms->beginStructArrayElem("ic_unbounded_array", i_ic_unbounded_array);
			ic_unbounded_array[i_ic_unbounded_array].update(cms);
			cms->endStructArrayElem("ic_unbounded_array", i_ic_unbounded_array);
		}
	}
	cms->endStructUnboundedArray("ic_unbounded_array",((void **) &ic_unbounded_array),ic_unbounded_array_length,ic_unbounded_array_size_allocated,sizeof(INSIDE_COMMAND));
	cms->beginClassVar("s");
	nmlupdate(cms,((mystruct *)&s));
	cms->endClassVar("s");
	for(int i_sa = 0;i_sa < 3 ;i_sa++)
	{
		cms->beginStructArrayElem("sa",i_sa);
		nmlupdate(cms, ((mystruct *)  sa) + i_sa);
		cms->endStructArrayElem("sa",i_sa);
	}
	cms->update_dla_length_with_name("sda_length",sda_length);
	cms->beginStructDynamicArray("sda",sda_length,10);
	for(int i_sda = 0;i_sda < sda_length ;i_sda++)
	{
		cms->beginStructArrayElem("sda",i_sda);
		nmlupdate(cms, ((mystruct *) (sda)) + i_sda);
		cms->endStructArrayElem("sda",i_sda);
	}
	cms->endStructDynamicArray("sda",sda_length,10);
	cms->beginStructUnboundedArray("sda_unbounded",((void **) &sda_unbounded),sda_unbounded_length,sda_unbounded_size_allocated,sizeof(mystruct));
	if(0 != sda_unbounded)
	{
		for(int i_sda_unbounded=0; i_sda_unbounded < sda_unbounded_length && i_sda_unbounded < sda_unbounded_size_allocated ; i_sda_unbounded++)
		{
			cms->beginStructArrayElem("sda_unbounded", i_sda_unbounded);
			nmlupdate(cms, ((mystruct*)sda_unbounded)+ i_sda_unbounded);
			cms->endStructArrayElem("sda_unbounded", i_sda_unbounded);
		}
	}
	cms->endStructUnboundedArray("sda_unbounded",((void **) &sda_unbounded),sda_unbounded_length,sda_unbounded_size_allocated,sizeof(mystruct));
	cms->update_with_name("lastvar",lastvar);

	cms->endClass("EXAMPLE_MESSAGE","NMLmsg");

}


/*
*	NML/CMS Update function for INSIDE_COMMAND
*	from cgtester.hh:46
*/
void INSIDE_COMMAND::update(CMS *cms)
{

	cms->beginClass("INSIDE_COMMAND","INSIDE_COMMAND_BASE");

	cms->beginBaseClass("INSIDE_COMMAND_BASE");
	INSIDE_COMMAND_BASE::update(cms);
	cms->endBaseClass("INSIDE_COMMAND_BASE");

	cms->update_with_name("inside_command_int",inside_command_int);

	cms->endClass("INSIDE_COMMAND","INSIDE_COMMAND_BASE");

}


/*
*	NML/CMS Update function for INSIDE_COMMAND_BASE
*	from cgtester.hh:0
*/
void INSIDE_COMMAND_BASE::update(CMS *cms)
{

	cms->beginClass("INSIDE_COMMAND_BASE","RCS_CMD_MSG");
	RCS_CMD_MSG::update_cmd_msg_base(cms);
	cms->update_with_name("inside_command_base_int",inside_command_base_int);

	cms->endClass("INSIDE_COMMAND_BASE","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for INSIDE_STATUS
*	from cgtester.hh:65
*/
void INSIDE_STATUS::update(CMS *cms)
{

	cms->beginClass("INSIDE_STATUS","INSIDE_STATUS_BASE");

	cms->beginBaseClass("INSIDE_STATUS_BASE");
	INSIDE_STATUS_BASE::update(cms);
	cms->endBaseClass("INSIDE_STATUS_BASE");

	cms->update_with_name("inside_status_int",inside_status_int);

	cms->endClass("INSIDE_STATUS","INSIDE_STATUS_BASE");

}


/*
*	NML/CMS Update function for INSIDE_STATUS_BASE
*	from cgtester.hh:55
*/
void INSIDE_STATUS_BASE::update(CMS *cms)
{

	cms->beginClass("INSIDE_STATUS_BASE","RCS_STAT_MSG");

	RCS_STAT_MSG::update_stat_msg_base(cms);
	cms->update_with_name("inside_status_base_int",inside_status_base_int);

	cms->endClass("INSIDE_STATUS_BASE","RCS_STAT_MSG");

}


/*
*	NML/CMS Update function for mystruct
*	from cgtester.hh:74
*/
void nmlupdate(CMS *cms,mystruct *x)
{

	cms->beginClass("mystruct",0);
	cms->beginClassVar("is");
	x->is.update(cms);
	cms->endClassVar("is");
	cms->next_update_default("10");
	cms->update_with_name("i",x->i);
	cms->update_with_name("c",x->c);
	cms->update_with_name("f",x->f);
	cms->update_with_name("d",x->d);
	cms->update_with_name("ia",x->ia,3);
	cms->update_with_name("ca",(char *) x->ca,3);
	cms->update_with_name("hexdata",(unsigned char *) x->hexdata,10);
	cms->update_with_name("name",(char *) x->name,60);
	cms->next_update_default("10");
	cms->update_attribute_with_name("i_attribute",x->i_attribute);
	cms->update_attribute_with_name("c_attribute",x->c_attribute);
	cms->update_attribute_with_name("f_attribute",x->f_attribute);
	cms->update_attribute_with_name("d_attribute",x->d_attribute);
	cms->update_attribute_with_name("ca_attribute",(char *) x->ca_attribute,10);
	x->enumtestvar= (enum enumtest) cms->update_enumeration_with_name("enumtestvar", (int)x->enumtestvar,(void*)&(x->enumtestvar),0);
	cms->beginEnumerationArray("enumtestvar_array",0,5);
	for(int i_enumtestvar_array=0; i_enumtestvar_array < 5; i_enumtestvar_array++ )
	{
		x->enumtestvar_array[i_enumtestvar_array] = (enum enumtest)
			cms->update_enumeration_array_elem(x->enumtestvar_array[i_enumtestvar_array],(void *) &(x->enumtestvar_array[i_enumtestvar_array]),i_enumtestvar_array);
	}
	cms->endEnumerationArray("enumtestvar_array",0,5);
	cms->update_dla_length_with_name("enumtest_dla_length",x->enumtest_dla_length);
	cms->beginEnumerationDLA("enumtest_dla",0,x->enumtest_dla_length,5);
	for(int i_enumtest_dla=0; i_enumtest_dla < x->enumtest_dla_length && x->enumtest_dla_length <= 5; i_enumtest_dla++ )
	{
		x->enumtest_dla[i_enumtest_dla] = (enum enumtest)
			cms->update_enumeration_array_elem(x->enumtest_dla[i_enumtest_dla],(void *) &(x->enumtest_dla[i_enumtest_dla]),i_enumtest_dla);
	}
	cms->endEnumerationDLA("enumtest_dla",0,x->enumtest_dla_length,5);
	cms->update_with_name("fa",(float *) x->fa,3);
	cms->update_with_name("da",(double *) x->da,3);
	cms->update_with_name("cart",x->cart);
	cms->update_with_name("cart_array",(PM_CARTESIAN *) x->cart_array,3);
	cms->update_with_name("homo",x->homo);
	cms->update_with_name("homo_array",(PM_HOMOGENEOUS *) x->homo_array,3);
	cms->update_dla_length_with_name("cda_length",x->cda_length);
	cms->update_dla_with_name("cda",(char *) x->cda, x->cda_length,10);
	cms->update_dla_length_with_name("ida_length",x->ida_length);
	cms->update_dla_with_name("ida",(int *) x->ida, x->ida_length,10);
	cms->update_dla_length_with_name("fda_length",x->fda_length);
	cms->update_dla_with_name("fda",(float *) x->fda, x->fda_length,10);
	cms->update_dla_length_with_name("dda_length",x->dda_length);
	cms->update_dla_with_name("dda",(double *) x->dda, x->dda_length,10);
	cms->update_dla_length_with_name("cart_dynamic_array_length",x->cart_dynamic_array_length);
	cms->update_dla_with_name("cart_dynamic_array",(PM_CARTESIAN *) x->cart_dynamic_array, x->cart_dynamic_array_length,10);
	cms->update_dla_length_with_name("homo_dynamic_array_length",x->homo_dynamic_array_length);
	cms->update_dla_with_name("homo_dynamic_array",(PM_HOMOGENEOUS *) x->homo_dynamic_array, x->homo_dynamic_array_length,10);
	cms->next_update_default("foobar");
	cms->update_unbounded_with_name("initialized_cda_unbounded",&x->initialized_cda_unbounded, x->initialized_cda_unbounded_length, x->initialized_cda_unbounded_size_allocated);
	cms->update_unbounded_with_name("cda_unbounded",&x->cda_unbounded, x->cda_unbounded_length, x->cda_unbounded_size_allocated);
	cms->update_unbounded_with_name("ida_unbounded",&x->ida_unbounded, x->ida_unbounded_length, x->ida_unbounded_size_allocated);
	cms->update_unbounded_with_name("fda_unbounded",&x->fda_unbounded, x->fda_unbounded_length, x->fda_unbounded_size_allocated);
	cms->update_unbounded_with_name("dda_unbounded",&x->dda_unbounded, x->dda_unbounded_length, x->dda_unbounded_size_allocated);

	cms->endClass("mystruct",0);

}

/*
*	Constructor for EXAMPLE_MESSAGE
*	from cgtester.hh:133
*/
EXAMPLE_MESSAGE::EXAMPLE_MESSAGE()
	: NMLmsg(EXAMPLE_MESSAGE_TYPE,sizeof(EXAMPLE_MESSAGE))
{
	i = (int) 10; /* set by default= comment */
	c = (char) 0;
	f = (float) 0;
	d = (double) 0;
	for(int i_ia=0; i_ia< 3; i_ia++)
	{
		((int*)ia)[i_ia]  = (int) 0;
	}
	for(int i_ca=0; i_ca< 3; i_ca++)
	{
		((char*)ca)[i_ca]  = (char) 0;
	}
	for(int i_hexdata=0; i_hexdata< 10; i_hexdata++)
	{
		((unsigned char*)hexdata)[i_hexdata]  = (unsigned char) 0;
	}
	for(int i_name=0; i_name< 60; i_name++)
	{
		((char*)name)[i_name]  = (char) 0;
	}
	i_attribute = (int) 10; /* set by default= comment */
	c_attribute = (char) 0;
	f_attribute = (float) 0;
	d_attribute = (double) 0;
	for(int i_ca_attribute=0; i_ca_attribute< 10; i_ca_attribute++)
	{
		((char*)ca_attribute)[i_ca_attribute]  = (char) 0;
	}
	enumtestvar = (enum enumtest) b; /*8*/
	rcsstatus = (enum RCS_STATUS) RCS_EXEC; /*2*/
	for(int i_enumtestvar_array=0; i_enumtestvar_array< 5; i_enumtestvar_array++)
	{
		((enum enumtest*)enumtestvar_array)[i_enumtestvar_array]  = (enum enumtest) b; /*8*/
	}
	enumtest_dla_length = (int) 2;
	for(int i_enumtest_dla=0; i_enumtest_dla< 5; i_enumtest_dla++)
	{
		((enum enumtest*)enumtest_dla)[i_enumtest_dla]  = (enum enumtest) b; /*8*/
	}
	for(int i_fa=0; i_fa< 3; i_fa++)
	{
		((float*)fa)[i_fa]  = (float) 5.0; /* set by default= comment */
	}
	for(int i_da=0; i_da< 3; i_da++)
	{
		((double*)da)[i_da]  = (double) 0;
	}
	cda_length = (int) 2;
	for(int i_cda=0; i_cda< 10; i_cda++)
	{
		((char*)cda)[i_cda]  = (char) 0;
	}
	ida_length = (int) 2;
	for(int i_ida=0; i_ida< 10; i_ida++)
	{
		((int*)ida)[i_ida]  = (int) 0;
	}
	fda_length = (int) 2;
	for(int i_fda=0; i_fda< 10; i_fda++)
	{
		((float*)fda)[i_fda]  = (float) 0;
	}
	dda_length = (int) 2;
	for(int i_dda=0; i_dda< 10; i_dda++)
	{
		((double*)dda)[i_dda]  = (double) 0;
	}
	cart_dynamic_array_length = (int) 2;
	homo_dynamic_array_length = (int) 2;
	ic_dynamic_array_length = (int) 2;
	cda_unbounded= new char[2];
	cda_unbounded_length=2;
	cda_unbounded_size_allocated=2;
	for(int i_cda_unbounded=0; i_cda_unbounded< 2; i_cda_unbounded++)
	{
		cda_unbounded[i_cda_unbounded]=0;
	}
	ida_unbounded= new int[2];
	ida_unbounded_length=2;
	ida_unbounded_size_allocated=2;
	for(int i_ida_unbounded=0; i_ida_unbounded< 2; i_ida_unbounded++)
	{
		ida_unbounded[i_ida_unbounded]=0;
	}
	fda_unbounded= new float[2];
	fda_unbounded_length=2;
	fda_unbounded_size_allocated=2;
	for(int i_fda_unbounded=0; i_fda_unbounded< 2; i_fda_unbounded++)
	{
		fda_unbounded[i_fda_unbounded]=0;
	}
	dda_unbounded= new double[2];
	dda_unbounded_length=2;
	dda_unbounded_size_allocated=2;
	for(int i_dda_unbounded=0; i_dda_unbounded< 2; i_dda_unbounded++)
	{
		dda_unbounded[i_dda_unbounded]=0;
	}
	ic_unbounded_array= new INSIDE_COMMAND[2];
	ic_unbounded_array_length=2;
	ic_unbounded_array_size_allocated=2;
	initialize_mystruct( &(s));
	for(int i_sa=0; i_sa< 3; i_sa++)
	{
		initialize_mystruct(((mystruct*)sa)+i_sa);
	}
	sda_length = (int) 1;
	for(int i_sda=0; i_sda< 10; i_sda++)
	{
		initialize_mystruct(((mystruct*)sda)+i_sda);
	}
	sda_unbounded= new mystruct[2];
	sda_unbounded_length=2;
	sda_unbounded_size_allocated=2;
	for(int i_sda_unbounded=0; i_sda_unbounded< 2; i_sda_unbounded++)
	{
		initialize_mystruct( ((mystruct*)(sda_unbounded))+i_sda_unbounded);
	}
	lastvar = (long) 0;

}

/*
*	Initializer for mystruct
*/
void initialize_mystruct(mystruct* x)
{
	x->i = (int) 10; /* set by default= comment */
	x->c = (char) 0;
	x->f = (float) 0;
	x->d = (double) 0;
	for(int i_ia=0; i_ia< 3; i_ia++)
	{
		((int*) x->ia)[i_ia]  = (int) 0;
	}
	for(int i_ca=0; i_ca< 3; i_ca++)
	{
		((char*) x->ca)[i_ca]  = (char) 0;
	}
	for(int i_hexdata=0; i_hexdata< 10; i_hexdata++)
	{
		((unsigned char*) x->hexdata)[i_hexdata]  = (unsigned char) 0;
	}
	for(int i_name=0; i_name< 60; i_name++)
	{
		((char*) x->name)[i_name]  = (char) 0;
	}
	x->i_attribute = (int) 10; /* set by default= comment */
	x->c_attribute = (char) 0;
	x->f_attribute = (float) 0;
	x->d_attribute = (double) 0;
	for(int i_ca_attribute=0; i_ca_attribute< 10; i_ca_attribute++)
	{
		((char*) x->ca_attribute)[i_ca_attribute]  = (char) 0;
	}
	x->enumtestvar = (enum enumtest) b; /*8*/
	for(int i_enumtestvar_array=0; i_enumtestvar_array< 5; i_enumtestvar_array++)
	{
		((enum enumtest*) x->enumtestvar_array)[i_enumtestvar_array]  = (enum enumtest) b; /*8*/
	}
	x->enumtest_dla_length = (int) 2;
	for(int i_enumtest_dla=0; i_enumtest_dla< 5; i_enumtest_dla++)
	{
		((enum enumtest*) x->enumtest_dla)[i_enumtest_dla]  = (enum enumtest) b; /*8*/
	}
	for(int i_fa=0; i_fa< 3; i_fa++)
	{
		((float*) x->fa)[i_fa]  = (float) 0;
	}
	for(int i_da=0; i_da< 3; i_da++)
	{
		((double*) x->da)[i_da]  = (double) 0;
	}
	x->cda_length = (int) 2;
	for(int i_cda=0; i_cda< 10; i_cda++)
	{
		((char*) x->cda)[i_cda]  = (char) 0;
	}
	x->ida_length = (int) 2;
	for(int i_ida=0; i_ida< 10; i_ida++)
	{
		((int*) x->ida)[i_ida]  = (int) 0;
	}
	x->fda_length = (int) 2;
	for(int i_fda=0; i_fda< 10; i_fda++)
	{
		((float*) x->fda)[i_fda]  = (float) 0;
	}
	x->dda_length = (int) 2;
	for(int i_dda=0; i_dda< 10; i_dda++)
	{
		((double*) x->dda)[i_dda]  = (double) 0;
	}
	x->cart_dynamic_array_length = (int) 2;
	x->homo_dynamic_array_length = (int) 2;
	SET_NML_UNBOUNDED_STRING(	x->initialized_cda_unbounded,"foobar");
	x->cda_unbounded= new char[2];
	x->cda_unbounded_length=2;
	x->cda_unbounded_size_allocated=2;
	for(int i_cda_unbounded=0; i_cda_unbounded< 2; i_cda_unbounded++)
	{
		x->cda_unbounded[i_cda_unbounded]=0;
	}
	x->ida_unbounded= new int[2];
	x->ida_unbounded_length=2;
	x->ida_unbounded_size_allocated=2;
	for(int i_ida_unbounded=0; i_ida_unbounded< 2; i_ida_unbounded++)
	{
		x->ida_unbounded[i_ida_unbounded]=0;
	}
	x->fda_unbounded= new float[2];
	x->fda_unbounded_length=2;
	x->fda_unbounded_size_allocated=2;
	for(int i_fda_unbounded=0; i_fda_unbounded< 2; i_fda_unbounded++)
	{
		x->fda_unbounded[i_fda_unbounded]=0;
	}
	x->dda_unbounded= new double[2];
	x->dda_unbounded_length=2;
	x->dda_unbounded_size_allocated=2;
	for(int i_dda_unbounded=0; i_dda_unbounded< 2; i_dda_unbounded++)
	{
		x->dda_unbounded[i_dda_unbounded]=0;
	}

}

