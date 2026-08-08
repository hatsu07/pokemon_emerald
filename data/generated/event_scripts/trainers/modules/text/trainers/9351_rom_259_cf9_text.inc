	@ data/text/trainers.inc:184 Route104_Text_GinaPostBattle
	.globl gText_Rom_259CF9
gText_Rom_259CF9: @ 0x08259CF9
	.string "ナオ『うわー {STR_VAR_1} つよいです!\nあたしたち もっと しゅぎょう するです"
	.byte EOS
	.if (. - gText_Rom_259CF9) > 0x26
	.error "gText_Rom_259CF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259CF9) < 0x26
	.space 0x26 - (. - gText_Rom_259CF9)
	.endif
