	@ data/text/trainers.inc:1379 Route114_Text_NolanPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25CEDD
gText_Rom_25CEDD: @ 0x0825CEDD
	.string "こんどこそ!\pと おもっちゃうから\nつりも しょうぶも やめられない$"
	.if (. - gText_Rom_25CEDD) != 0x23
	.error "gText_Rom_25CEDD must retain its original byte length"
	.endif
