	@ data/text/battle_tent.inc:216 VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize
	.globl gText_Rom_2752ED
gText_Rom_2752ED: @ 0x082752ED
	.string "3にんぬきの あかしに\nこちらを さしあげよう……{EOS}"
	.if (. - gText_Rom_2752ED) > 0x1a
	.error "gText_Rom_2752ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2752ED) < 0x1a
	.space 0x1a - (. - gText_Rom_2752ED)
	.endif
