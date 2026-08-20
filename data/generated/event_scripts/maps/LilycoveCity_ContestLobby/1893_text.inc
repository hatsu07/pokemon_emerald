	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1004 LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs
	.globl gText_Rom_20760A
gText_Rom_20760A: @ 0x0820760A
	.string "そっか しかたないね\nそれじゃ これは ぼくの\lいえに かざります\pつぎ がんばると するか……\nじゃあな{EOS}"
	.if (. - gText_Rom_20760A) > 0x36
	.error "gText_Rom_20760A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20760A) < 0x36
	.space 0x36 - (. - gText_Rom_20760A)
	.endif
