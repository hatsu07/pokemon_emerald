	@ data/maps/SlateportCity/scripts.inc:1172 SlateportCity_Text_AquaWillAssumeControlOfSubmarine
	.globl gText_Rom_1DD316
gText_Rom_1DD316: @ 0x081DD316
	.string "『フフフ……\nクスノキかんちょう とやら\pきみの せんすいていは\nわれわれ アクアだんが いただく!\pきみたちは われわれに だまって\nきょうりょく すれば いいのだよ!\pフフフ……\nこれから アクアだんが なにを するか\lたのしみに していたまえ!』$"
	.if (. - gText_Rom_1DD316) > 0x7f
	.error "gText_Rom_1DD316 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD316) < 0x7f
	.space 0x7f - (. - gText_Rom_1DD316)
	.endif
