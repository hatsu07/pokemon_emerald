	@ data/text/trainers.inc:1754 Route117_Text_MariaRematchIntro (+1 aliases)
	.globl gText_Rom_25DE84
gText_Rom_25DE84: @ 0x0825DE84
	.string "どう れんしゅう つづけてる?\nあたしは もちろん つづけてるわ\lその しょうこ みせちゃうから!$"
	.if (. - gText_Rom_25DE84) > 0x32
	.error "gText_Rom_25DE84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DE84) < 0x32
	.space 0x32 - (. - gText_Rom_25DE84)
	.endif
