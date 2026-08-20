	@ data/text/trainers.inc:1340 Route114_Text_StevePostRematch
	.globl gText_Rom_25CD05
gText_Rom_25CD05: @ 0x0825CD05
	.string "うふふふふふ……\pポケモンの たたかっている すがたに\nぞくぞく するんだ ボク{EOS}"
	.if (. - gText_Rom_25CD05) > 0x29
	.error "gText_Rom_25CD05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CD05) < 0x29
	.space 0x29 - (. - gText_Rom_25CD05)
	.endif
