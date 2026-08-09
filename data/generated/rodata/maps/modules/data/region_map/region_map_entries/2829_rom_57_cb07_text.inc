	@ src/data/region_map/region_map_entries.h:504 region_map_entries_line_504
	.globl gText_Rom_57CB07
gText_Rom_57CB07: @ 0x0857CB07
	.string "チャンピオンロード$"
	.if (. - gText_Rom_57CB07) > 0xa
	.error "gText_Rom_57CB07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB07) < 0xa
	.space 0xa - (. - gText_Rom_57CB07)
	.endif
	@ analyzed canonical ROM range 0x0857CB11-0x0857CB16
sAnalyzedData_0857CB11: @ 0x0857CB11
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x7B, 0x59, 0xA0, 0x64, 0x41, 0x2E
