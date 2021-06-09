// JavaScript Document
function randomFromInterval(from,to)
{
	return Math.floor(Math.random()*(to-from+1)+from);
}
function writeToTag( tagID,  innertext)
{// start of writeToTag
	/*
		Enters info into the innerHTML of a tag using the ID
		INPUTS
			tagID is the HTML ID of the tag to put content in
			innertext is the "text" to put put in the tag
		OUTPUTS - none
	
	*/
	
	document.getElementById(tagID).innerHTML=innertext;
}// end of writeToTag