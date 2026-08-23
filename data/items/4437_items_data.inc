	@ pret/pokeemerald-jp direct xref for 0x085C976F: battle_pyramid_bag.s: PyramidBag_CopyItemName; item_menu.s: GetItemName
	.globl gText_NumberItem_TMBerry
gText_NumberItem_TMBerry: @ 0x085C976F
	@ JP numbered TM/Berry item-name placeholder template.
	.byte 0xF9, 0x08
	.if (. - gText_NumberItem_TMBerry) != 0x2
	.error "gText_NumberItem_TMBerry size mismatch"
	.endif
