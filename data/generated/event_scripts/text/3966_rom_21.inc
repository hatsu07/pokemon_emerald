
	@ trainerbattle-cfg:0x21E585 TrainerBattleText_21E6F4
	.globl gText_Rom_21E6F4
gText_Rom_21E6F4: @ 0x0821E6F4
	.string "ジン『ちょっと　はずかしいけど\nぼくたちの　ラブラブ　パワー　みせようかな"
	.byte EOS
	.if (. - gText_Rom_21E6F4) > 0x26
	.error "gText_Rom_21E6F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E6F4) < 0x26
	.space 0x26 - (. - gText_Rom_21E6F4)
	.endif

	@ trainerbattle-cfg:0x21E585 TrainerBattleText_21E71A
	.globl gText_Rom_21E71A
gText_Rom_21E71A: @ 0x0821E71A
	.string "ジン『はぁ……"
	.byte EOS
	.if (. - gText_Rom_21E71A) > 0x8
	.error "gText_Rom_21E71A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E71A) < 0x8
	.space 0x8 - (. - gText_Rom_21E71A)
	.endif
