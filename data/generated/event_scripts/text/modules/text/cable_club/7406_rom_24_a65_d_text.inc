	@ data/text/cable_club.inc:29 gText_PleaseWaitForLink
	.globl gText_Rom_24A65D
gText_Rom_24A65D: @ 0x0824A65D
	.string "しょうしょう おまち ください\n……Bボタンで キャンセル$"
	.if (. - gText_Rom_24A65D) > 0x1e
	.error "gText_Rom_24A65D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A65D) < 0x1e
	.space 0x1e - (. - gText_Rom_24A65D)
	.endif
	@ analyzed canonical ROM range 0x0824A67B-0x0824A6A9
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0824A67B: @ 0x0824A67B
EventText_JP_0824A67B: @ 0x0824A67B
	.string "またの　さんかを　おまち　してます!$"
EventText_JP_0824A68E: @ 0x0824A68E
	.string "つうしん　エラーです\nもう1ど　やりなおして　ください$"
