	@ data/text/tv.inc:1171 GabbyAndTy_Text_TyIntro (+1 aliases)
	.globl gText_Rom_253312
gText_Rom_253312: @ 0x08253312
	.string "ダイ『きみは このあいだの!\pよーし この たたかいを\nすべて カメラに おさめてやる"
	.byte EOS
	.if (. - gText_Rom_253312) > 0x2c
	.error "gText_Rom_253312 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253312) < 0x2c
	.space 0x2c - (. - gText_Rom_253312)
	.endif
