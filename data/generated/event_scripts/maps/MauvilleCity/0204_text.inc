	@ data/maps/MauvilleCity/scripts.inc:622 MauvilleCity_Text_AllSortsOfPeopleComeThrough
	.globl gText_Rom_1DE509
gText_Rom_1DE509: @ 0x081DE509
	.string "この まちは とうざい なんぼく に\nみちが つうじて いるから\lいろんな ひとが やってきます!{EOS}"
	.if (. - gText_Rom_1DE509) > 0x32
	.error "gText_Rom_1DE509 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE509) < 0x32
	.space 0x32 - (. - gText_Rom_1DE509)
	.endif
