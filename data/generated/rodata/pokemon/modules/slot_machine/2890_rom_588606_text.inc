	@ src/slot_machine.c:653 sText_QuitTheGame
	.globl gText_Rom_588606
gText_Rom_588606: @ 0x08588606
	.string "ゲームを やめますか？$"
	.if (. - gText_Rom_588606) > 0xc
	.error "gText_Rom_588606 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_588606) < 0xc
	.space 0xc - (. - gText_Rom_588606)
	.endif
