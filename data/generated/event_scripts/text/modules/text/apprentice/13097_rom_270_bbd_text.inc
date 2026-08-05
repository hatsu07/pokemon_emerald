	@ data/text/apprentice.inc:562 gText_ApprenticeMonFirstThanks13
	.globl gText_Rom_270BBD
gText_Rom_270BBD: @ 0x08270BBD
	.string "ん わかった {STR_VAR_1}な!\nじゃあ ごはんを たべたら\lそういうふうに してみるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_Rom_270BBD) > 0x3e
	.error "gText_Rom_270BBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270BBD) < 0x3e
	.space 0x3e - (. - gText_Rom_270BBD)
	.endif
