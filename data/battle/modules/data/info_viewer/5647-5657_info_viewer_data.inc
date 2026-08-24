	@ src/data/union_room.h:88 sText_BButtonCancel (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_BButtonCancel_Copy_UnionRoom
sText_BButtonCancel_Copy_UnionRoom: @ 0x085CB759
	.string "{B_BUTTON}やめる{EOS}"
	.if (. - sText_BButtonCancel_Copy_UnionRoom) != 0x6
	.error "sText_BButtonCancel_Copy_UnionRoom must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5CB75F, size=0x9
	.byte 0xF8, 0x00, 0x72, 0x66, 0x85, 0xAE, 0x00, 0xF8, 0x01
	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB768
gText_Rom_5CB768: @ 0x085CB768
	.string "もどる{EOS}"
	.if (. - gText_Rom_5CB768) > 0x4
	.error "gText_Rom_5CB768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB768) < 0x4
	.space 0x4 - (. - gText_Rom_5CB768)
	.endif
	@ analyzed canonical ROM range 0x085CB76C-0x085CB774
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x00, 0x09, 0x50, 0x13, 0x02, 0x00, 0xF8, 0x01
	.globl gText_Rom_5CB775
gText_Rom_5CB775: @ 0x085CB775
	.string "もどる{EOS}"
	.if (. - gText_Rom_5CB775) > 0x4
	.error "gText_Rom_5CB775 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB775) < 0x4
	.space 0x4 - (. - gText_Rom_5CB775)
	.endif
	@ analyzed canonical ROM range 0x085CB779-0x085CB77A
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x01
	.globl gText_Rom_5CB77B
gText_Rom_5CB77B: @ 0x085CB77B
	.string "もどる{EOS}"
	.if (. - gText_Rom_5CB77B) > 0x4
	.error "gText_Rom_5CB77B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB77B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB77B)
	.endif
	@ analyzed canonical ROM range 0x085CB77F-0x085CB789
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x00, 0x78, 0x9A, 0x7E, 0x2D, 0x20, 0x29, 0x00, 0xF8, 0x01
	.globl gText_Rom_5CB78A
gText_Rom_5CB78A: @ 0x085CB78A
	.string "もどる{EOS}"
	.if (. - gText_Rom_5CB78A) > 0x4
	.error "gText_Rom_5CB78A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB78A) < 0x4
	.space 0x4 - (. - gText_Rom_5CB78A)
	.endif
	@ analyzed canonical ROM range 0x085CB78E-0x085CB797
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x00F8, 0x360C, 0x0B03, 0x0002, 0x01F8
	.globl gText_Rom_5CB798
gText_Rom_5CB798: @ 0x085CB798
	.string "もどる{EOS}"
	.if (. - gText_Rom_5CB798) > 0x4
	.error "gText_Rom_5CB798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB798) < 0x4
	.space 0x4 - (. - gText_Rom_5CB798)
	.endif
	@ analyzed canonical ROM range 0x085CB79C-0x085CB79D
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x01
	.globl gText_Rom_5CB79E
gText_Rom_5CB79E: @ 0x085CB79E
	.string "もどる{EOS}"
	.if (. - gText_Rom_5CB79E) > 0x4
	.error "gText_Rom_5CB79E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB79E) < 0x4
	.space 0x4 - (. - gText_Rom_5CB79E)
	.endif
