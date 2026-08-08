	@ data/text/trainers.inc:365 Route105_Text_AndresRematchPostBattle
	.globl gText_Rom_25A553
gText_Rom_25A553: @ 0x0825A553
	.string "しょうぶは よわいが\nたんきゅうしんは きみにも まけん!\lせかいじゅうの うみを たび するぞ!$"
	.if (. - gText_Rom_25A553) > 0x32
	.error "gText_Rom_25A553 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A553) < 0x32
	.space 0x32 - (. - gText_Rom_25A553)
	.endif
