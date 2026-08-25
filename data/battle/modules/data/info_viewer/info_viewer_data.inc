	@ ANALYSIS: RAW_RANGE offset=0x5CB703, size=0x1A
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0xF8, 0x00, 0x06, 0x08, 0x41, 0x02, 0x00, 0xF8, 0x01
	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl sInfoText_ChoiceBack_Copy_Battle_5CB71D
sInfoText_ChoiceBack_Copy_Battle_5CB71D: @ 0x085CB71D
	.string "もどる{EOS}"
	.if (. - sInfoText_ChoiceBack_Copy_Battle_5CB71D) > 0x4
	.error "sInfoText_ChoiceBack_Copy_Battle_5CB71D may not grow beyond its original slot"
	.endif
	.if (. - sInfoText_ChoiceBack_Copy_Battle_5CB71D) < 0x4
	.space 0x4 - (. - sInfoText_ChoiceBack_Copy_Battle_5CB71D)
	.endif
	@ analyzed canonical ROM range 0x085CB721-0x085CB729
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x00, 0x3F, 0x2E, 0x10, 0x02, 0x00, 0xF8, 0x01
	.globl gText_Rom_5CB72A
gText_Rom_5CB72A: @ 0x085CB72A
	.string "もどる{EOS}"
	.if (. - gText_Rom_5CB72A) > 0x4
	.error "gText_Rom_5CB72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB72A) < 0x4
	.space 0x4 - (. - gText_Rom_5CB72A)
	.endif
	@ analyzed canonical ROM range 0x085CB72E-0x085CB73C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x00, 0x5A, 0x7E, 0x94, 0x80, 0x5C, 0x86, 0x7E, 0x2D, 0x20, 0x29, 0x00, 0xF8, 0x01
	.globl gText_Rom_5CB73D
gText_Rom_5CB73D: @ 0x085CB73D
	.string "もどる{EOS}"
	.if (. - gText_Rom_5CB73D) > 0x4
	.error "gText_Rom_5CB73D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB73D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB73D)
	.endif
	@ analyzed canonical ROM range 0x085CB741-0x085CB74A
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x00, 0x6F, 0xAE, 0x57, 0x7E, 0x89, 0x00, 0xF8, 0x01
	.globl gText_Rom_5CB74B
gText_Rom_5CB74B: @ 0x085CB74B
	.string "もどる{EOS}"
	.if (. - gText_Rom_5CB74B) > 0x4
	.error "gText_Rom_5CB74B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB74B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB74B)
	.endif
	@ analyzed canonical ROM range 0x085CB74F-0x085CB758
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x00F8, 0xAE6F, 0x2D58, 0x2704, 0x0048
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
	.globl sInfoText_ChoiceBack_Copy_Battle_5CB768
sInfoText_ChoiceBack_Copy_Battle_5CB768: @ 0x085CB768
	.string "もどる{EOS}"
	.if (. - sInfoText_ChoiceBack_Copy_Battle_5CB768) > 0x4
	.error "sInfoText_ChoiceBack_Copy_Battle_5CB768 may not grow beyond its original slot"
	.endif
	.if (. - sInfoText_ChoiceBack_Copy_Battle_5CB768) < 0x4
	.space 0x4 - (. - sInfoText_ChoiceBack_Copy_Battle_5CB768)
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
