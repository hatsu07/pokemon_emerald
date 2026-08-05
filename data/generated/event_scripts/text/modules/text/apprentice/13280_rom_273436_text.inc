	@ data/text/apprentice.inc:839 gText_ApprenticeWinSpeechThanks11
	.globl gText_Rom_273436
gText_Rom_273436: @ 0x08273436
	.string "{STR_VAR_1}\pなるほどーっ! ようよう!\nそんなら ノリノリで それ つかうぜ!\pそろそろ わしも すだつと するか\nノリノリで たたかい まくるぜ!\lいろいろと ありがとうな!\pお・つ・か・れ・さ・ま!\nはーい おつかれさま ごきげんよう!$"
	.if (. - gText_Rom_273436) > 0x76
	.error "gText_Rom_273436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273436) < 0x76
	.space 0x76 - (. - gText_Rom_273436)
	.endif
