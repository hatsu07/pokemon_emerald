	@ pret/pokeemerald-jp direct xref for 0x085CB7D6: pokenav_unk_10.s: sub_081D06A0; pokenav_unk_4.s: sub_081CEFA0
	.globl gText_PokenavMonInfo_Male
gText_PokenavMonInfo_Male: @ 0x085CB7D6
	@ JP Pokenav mon-info dynamic-placeholder template selected for MON_MALE.
	.byte 0xF7, 0x00, 0x00, 0xFC, 0x04, 0x05, 0x01, 0x06, 0xB5, 0xFC, 0x04, 0x02, 0x01, 0x03, 0xBA, 0xF9
	.byte 0x05, 0xF7, 0x01, 0xFF
	.if (. - gText_PokenavMonInfo_Male) != 0x14
	.error "gText_PokenavMonInfo_Male size mismatch"
	.endif
	.globl gText_PokenavMonInfo_Female
gText_PokenavMonInfo_Female: @ 0x085CB7EA
	@ JP Pokenav mon-info dynamic-placeholder template selected for MON_FEMALE.
	.byte 0xF7, 0x00, 0x00, 0xFC, 0x04, 0x07, 0x01, 0x08, 0xB6, 0xFC, 0x04, 0x02, 0x01, 0x03, 0xBA, 0xF9
	.byte 0x05, 0xF7, 0x01, 0xFF
	.if (. - gText_PokenavMonInfo_Female) != 0x14
	.error "gText_PokenavMonInfo_Female size mismatch"
	.endif
	.globl gText_PokenavMonInfo_Genderless
gText_PokenavMonInfo_Genderless: @ 0x085CB7FE
	@ JP Pokenav mon-info dynamic-placeholder template selected for genderless/other.
	.byte 0xF7, 0x00, 0x00, 0x00, 0xBA, 0xF9, 0x05, 0xF7, 0x01, 0xFF
	.if (. - gText_PokenavMonInfo_Genderless) != 0xA
	.error "gText_PokenavMonInfo_Genderless size mismatch"
	.endif
	.globl gText_Rom_5CB808

