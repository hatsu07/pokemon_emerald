	@ data/text/trainers.inc:1748 Route117_Text_MariaPostBattle
	.globl gText_Rom_25DE32
gText_Rom_25DE32: @ 0x0825DE32
	.string "れんしゅうは つづけてこそ\nいみが あるのよね\pよーし! また れんしゅうよ\nあしたから!$"
	.if (. - gText_Rom_25DE32) > 0x2e
	.error "gText_Rom_25DE32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DE32) < 0x2e
	.space 0x2e - (. - gText_Rom_25DE32)
	.endif
