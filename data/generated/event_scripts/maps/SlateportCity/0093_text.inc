	@ data/maps/SlateportCity/scripts.inc:1150 SlateportCity_Text_GabbyWonderfulThanksForInterview
	.globl gText_Rom_1DD20D
gText_Rom_1DD20D: @ 0x081DD20D
	.string "マリ『そうですか いやあ クスノキさん!\nきょうは おいそがしい ところ\lどうも ありがとう ございました!\pまた なにか はっけんが ありましたら\nぜひ しゅざい させて くださいね!$"
	.if (. - gText_Rom_1DD20D) > 0x5e
	.error "gText_Rom_1DD20D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD20D) < 0x5e
	.space 0x5e - (. - gText_Rom_1DD20D)
	.endif
