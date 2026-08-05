	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CDB0
gText_Rom_24CDB0: @ 0x0824CDB0
	.string "まんぞく　した！！\pと　すがすがしく　こたえてくれたよ\nさすがだぜ！\pまんぞくいく　たたかいが　できるなんて\nほんと　すごいよねぇ　まったく！\pその　まんぞくかんは　つぎの　ひとことを\nきいたとき　すべて　わかったよ$"
	.if (. - gText_Rom_24CDB0) > 0x6d
	.error "gText_Rom_24CDB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CDB0) < 0x6d
	.space 0x6d - (. - gText_Rom_24CDB0)
	.endif
