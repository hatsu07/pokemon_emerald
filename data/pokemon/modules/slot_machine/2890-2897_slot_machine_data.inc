	@ src/slot_machine.c:653 sText_QuitTheGame
	.globl sText_QuitTheGame
sText_QuitTheGame: @ 0x08588606
	.string "ゲームを やめますか？{EOS}"
	.if (. - sText_QuitTheGame) > 0xc
	.error "sText_QuitTheGame may not grow beyond its original slot"
	.endif
	.if (. - sText_QuitTheGame) < 0xc
	.space 0xc - (. - sText_QuitTheGame)
	.endif

	@ asm/slot_machine.s:1721 SlotAction_PrintMessage_9999Coins
	.globl gText_Rom_588612
gText_Rom_588612: @ 0x08588612
	.string "コインが　9999まい\nたまって　います{EOS}"
	.if (. - gText_Rom_588612) > 0x15
	.error "gText_Rom_588612 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_588612) < 0x15
	.space 0x15 - (. - gText_Rom_588612)
	.endif

	@ asm/slot_machine.s:1778 SlotAction_PrintMessage_NoMoreCoins
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_588627
gText_Rom_588627: @ 0x08588627
	.string "コインが　ありません\nゲームを　しゅうりょうします{EOS}"
	.if (. - gText_Rom_588627) != 0x1a
	.error "gText_Rom_588627 must retain its original byte length"
	.endif
	.globl gText_Rom_58863D
	.set gText_Rom_58863D, gText_Rom_588627 + 0x16

	@ asm/slot_machine.s:1036 SlotAction_PrintYouDontHaveThreeCoins
	.globl gText_Rom_588641
gText_Rom_588641: @ 0x08588641
	.string "コインが　3まい　ありません！{EOS}"
	.if (. - gText_Rom_588641) > 0x10
	.error "gText_Rom_588641 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_588641) < 0x10
	.space 0x10 - (. - gText_Rom_588641)
	.endif
