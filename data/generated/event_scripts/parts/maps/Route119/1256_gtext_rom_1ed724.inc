	@ data/maps/Route119/scripts.inc:576 Route119_Text_ThoughtFlyByCatchingBirdMons
	.globl gText_Rom_1ED724
gText_Rom_1ED724: @ 0x081ED724
	.string "とりポケモンを たくさん あつめて\nそれに つかまれば\lそらを とべると おもって いたんだ\pそしたらさ 「そらをとぶ」っていう\nひでんわざが あるんだってね!?\pもっと はやく しりたかったよ……$"
	.if (. - gText_Rom_1ED724) > 0x64
	.error "gText_Rom_1ED724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED724) < 0x64
	.space 0x64 - (. - gText_Rom_1ED724)
	.endif
