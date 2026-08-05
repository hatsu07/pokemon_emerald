	@ data/maps/VerdanturfTown/scripts.inc:73 VerdanturfTown_Text_MakeBattleTentDebut
	.globl gText_Rom_1E61FD
gText_Rom_1E61FD: @ 0x081E61FD
	.string "ぼくと ぼくの ポケモン\nさいきん すごく ちょうしが よくてね\pバトルテント デビュー させたくて\nこの まちに きたんだ!$"
	.if (. - gText_Rom_1E61FD) > 0x40
	.error "gText_Rom_1E61FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E61FD) < 0x40
	.space 0x40 - (. - gText_Rom_1E61FD)
	.endif
