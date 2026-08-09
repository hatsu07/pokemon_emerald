	@ src/data/info_viewer.h:119 sInfoText_ChoiceBack (+5 aliases)
	.globl gText_Rom_5CB71D
gText_Rom_5CB71D: @ 0x085CB71D
	.string "もどる$"
	.if (. - gText_Rom_5CB71D) > 0x4
	.error "gText_Rom_5CB71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB71D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB71D)
	.endif
	@ analyzed canonical ROM range 0x085CB721-0x085CB729
sAnalyzedData_085CB721: @ 0x085CB721
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x00, 0x3F, 0x2E, 0x10, 0x02, 0x00, 0xF8, 0x01
	.globl gText_Rom_5CB72A
gText_Rom_5CB72A: @ 0x085CB72A
	.string "もどる$"
	.if (. - gText_Rom_5CB72A) > 0x4
	.error "gText_Rom_5CB72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB72A) < 0x4
	.space 0x4 - (. - gText_Rom_5CB72A)
	.endif
	@ analyzed canonical ROM range 0x085CB72E-0x085CB73C
sAnalyzedData_085CB72E: @ 0x085CB72E
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x00, 0x5A, 0x7E, 0x94, 0x80, 0x5C, 0x86, 0x7E, 0x2D, 0x20, 0x29, 0x00, 0xF8, 0x01
	.globl gText_Rom_5CB73D
gText_Rom_5CB73D: @ 0x085CB73D
	.string "もどる$"
	.if (. - gText_Rom_5CB73D) > 0x4
	.error "gText_Rom_5CB73D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB73D) < 0x4
	.space 0x4 - (. - gText_Rom_5CB73D)
	.endif
	@ analyzed canonical ROM range 0x085CB741-0x085CB74A
sAnalyzedData_085CB741: @ 0x085CB741
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x00, 0x6F, 0xAE, 0x57, 0x7E, 0x89, 0x00, 0xF8, 0x01
	.globl gText_Rom_5CB74B
gText_Rom_5CB74B: @ 0x085CB74B
	.string "もどる$"
	.if (. - gText_Rom_5CB74B) > 0x4
	.error "gText_Rom_5CB74B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB74B) < 0x4
	.space 0x4 - (. - gText_Rom_5CB74B)
	.endif
	@ analyzed canonical ROM range 0x085CB74F-0x085CB758
sAnalyzedData_085CB74F: @ 0x085CB74F
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x00F8, 0xAE6F, 0x2D58, 0x2704, 0x0048
