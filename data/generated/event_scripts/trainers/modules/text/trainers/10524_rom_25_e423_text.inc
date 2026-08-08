	@ data/text/trainers.inc:1877 Route118_Text_PerryPostBattle
	.globl gText_Rom_25E423
gText_Rom_25E423: @ 0x0825E423
	.string "きみも いい ポケモンを もってるね!\nぼくも まけずに そだてよっと!$"
	.if (. - gText_Rom_25E423) > 0x25
	.error "gText_Rom_25E423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E423) < 0x25
	.space 0x25 - (. - gText_Rom_25E423)
	.endif
