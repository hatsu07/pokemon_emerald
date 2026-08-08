	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:724 Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster
	.globl gText_Rom_23D3C6
gText_Rom_23D3C6: @ 0x0823D3C6
	.string "わがはい こそ!\pホウエンちほう さいだいの\nなぞの じんぶつ\lひと よんで……\pカラクリだいおう!\nわははは! はじめまして!"
	.byte EOS
	.if (. - gText_Rom_23D3C6) > 0x41
	.error "gText_Rom_23D3C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D3C6) < 0x41
	.space 0x41 - (. - gText_Rom_23D3C6)
	.endif
