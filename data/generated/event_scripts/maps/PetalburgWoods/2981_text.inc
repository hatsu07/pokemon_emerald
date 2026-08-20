	@ data/maps/PetalburgWoods/scripts.inc:326 PetalburgWoods_Text_IWasGoingToAmbushYou
	.globl gText_Rom_214617
gText_Rom_214617: @ 0x08214617
	.string "まちぶせ していたのに\nいつまでも トウカのもりで うろうろと……\pまちくたびれたから きてやったぞ!{EOS}"
	.if (. - gText_Rom_214617) > 0x34
	.error "gText_Rom_214617 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214617) < 0x34
	.space 0x34 - (. - gText_Rom_214617)
	.endif
