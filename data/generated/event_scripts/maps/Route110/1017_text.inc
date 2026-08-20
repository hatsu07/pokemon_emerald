	@ data/maps/Route110/scripts.inc:916 Route110_Text_AquaWasHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E9E70
gText_Rom_1E9E70: @ 0x081E9E70
	.string "「アクアだん さんじょう!」\p……と かんばんに らくがき されているが\nそのもじの うえに べつのペンキで\p「マグマだん さんじょう!」\n……と かかれている{EOS}"
	.if (. - gText_Rom_1E9E70) != 0x51
	.error "gText_Rom_1E9E70 must retain its original byte length"
	.endif
