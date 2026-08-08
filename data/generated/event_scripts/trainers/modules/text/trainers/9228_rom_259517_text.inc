	@ data/text/trainers.inc:1 Route102_Text_CalvinIntro (+1 aliases)
	.globl gText_Rom_259517
gText_Rom_259517: @ 0x08259517
	.string "ポケモン つれていれば\nキミも りっぱな ポケモントレーナー!\lボクの ちょうせん うけるよね!"
	.byte EOS
	.if (. - gText_Rom_259517) > 0x31
	.error "gText_Rom_259517 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259517) < 0x31
	.space 0x31 - (. - gText_Rom_259517)
	.endif
