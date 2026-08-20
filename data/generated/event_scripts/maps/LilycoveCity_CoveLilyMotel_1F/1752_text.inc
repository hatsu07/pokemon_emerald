	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:79 LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua
	.globl gText_Rom_205647
gText_Rom_205647: @ 0x08205647
	.string "あ ごめん ごめん!\nテレビに むちゅう だったもんで!\pアクアだん とかいう れんちゅうが\nまちに やってきた おかげで\lかんこうきゃくも さっぱり なんだよね{EOS}"
	.if (. - gText_Rom_205647) > 0x52
	.error "gText_Rom_205647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205647) < 0x52
	.space 0x52 - (. - gText_Rom_205647)
	.endif
