	@ data/text/trainers.inc:842 Route110_Text_DalePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B810
gText_Rom_25B810: @ 0x0825B810
	.string "すいめんに うかぶ うきを じっと みる……\nしゅうちゅうりょくが たいせつ なんだ$"
	.if (. - gText_Rom_25B810) != 0x2b
	.error "gText_Rom_25B810 must retain its original byte length"
	.endif
