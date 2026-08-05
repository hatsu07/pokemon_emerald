	@ data/maps/SlateportCity/scripts.inc:1108 SlateportCity_Text_CaptSternBeingInterviewed
	.globl gText_Rom_1DD082
gText_Rom_1DD082: @ 0x081DD082
	.string "ゆうめいな スターが きていたら\nサインを もらうつもり だったのに\pインタビュー されてるのは\nあれ…… クスノキさん でないかい?$"
	.if (. - gText_Rom_1DD082) > 0x44
	.error "gText_Rom_1DD082 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD082) < 0x44
	.space 0x44 - (. - gText_Rom_1DD082)
	.endif
