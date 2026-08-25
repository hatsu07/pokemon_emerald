	@ pret/pokeemerald-jp direct xref for 0x085CB7C6: menu_specialized.s: sub_081D2504; pokenav_unk_4.s: sub_081CCF84
	.globl gText_InParty
gText_InParty: @ 0x085CB7C6
	@ JP Pokenav condition-list location text used when box == TOTAL_BOXES_COUNT (party).
	.byte 0x13, 0x23, 0x11
	.if (. - gText_InParty) != 0x3
	.error "gText_InParty size mismatch"
	.endif
