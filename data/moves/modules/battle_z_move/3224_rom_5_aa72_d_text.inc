	@ src/battle_z_move.c:102 sText_RecoverHP
	.globl sText_RecoverHP
sText_RecoverHP: @ 0x085AA72D
	.string "かいふく{EOS}"
	.if (. - sText_RecoverHP) > 0x5
	.error "sText_RecoverHP may not grow beyond its original slot"
	.endif
	.if (. - sText_RecoverHP) < 0x5
	.space 0x5 - (. - sText_RecoverHP)
	.endif
	@ analyzed canonical ROM range 0x085AA732-0x085AA745
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x13FD, 0x0019, 0x1AFD, 0xFE44, 0x150D, 0x2701, 0x160C, 0x1500
	.2byte 0x1050, 0xFFAB
