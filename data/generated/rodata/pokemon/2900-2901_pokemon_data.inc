	@ pret/pokeemerald-jp direct xref for 0x085886AC: contest_painting.s: sub_08130488
	.globl gContestPaintingData_085886AC
gContestPaintingData_085886AC: @ 0x085886AC
	@ analyzed canonical ROM range 0x085886AC-0x085888AB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x200
	.2byte 0x0000, 0x7FFF, 0x739C, 0x6B5A, 0x6318, 0x5AD6, 0x5294, 0x4A52
	.2byte 0x4210, 0x39CE, 0x318C, 0x294A, 0x2108, 0x18C6, 0x1084, 0x0842
	.2byte 0x0000, 0x006B, 0x0911, 0x0974, 0x09D7, 0x1A5B, 0x2ADF, 0x437F
	.2byte 0x3AAC, 0x4F12, 0x73FB, 0x7FFF, 0x52F9, 0x4696, 0x3A34, 0x2590
	.2byte 0x0000, 0x6A56, 0x6296, 0x5EF6, 0x5B36, 0x5796, 0x53F7, 0x47FB
	.2byte 0x3FBE, 0x339F, 0x473F, 0x46DF, 0x5E9D, 0x6279, 0x7FDF, 0x24EB
	.2byte 0x0000, 0x51FF, 0x5A3F, 0x66DF, 0x7F5F, 0x033F, 0x1F5F, 0x3F9F
	.2byte 0x5FBF, 0x7FFF, 0x006B, 0x0911, 0x52F9, 0x4696, 0x3A34, 0x2590
	.2byte 0x0000, 0x006B, 0x0911, 0x1A5B, 0x437F, 0x4210, 0x2108, 0x001F
	.2byte 0x295F, 0x529F, 0x619F, 0x6A5F, 0x731F, 0x2FE9, 0x47F0, 0x63F7
	.2byte 0x0000, 0x006B, 0x0911, 0x1A5B, 0x437F, 0x4210, 0x2108, 0x7649
	.2byte 0x76D0, 0x7B57, 0x2FE9, 0x47F0, 0x63F7, 0x03FF, 0x3FFF, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085888AC: contest_painting.s: sub_08130488
	.globl gContestPaintingData_085888AC
gContestPaintingData_085888AC: @ 0x085888AC
	@ confirmed GBA RLE stream: compressed=0x1083, decompressed=0x1600
sRleBlock_085888AC:
	@ analyzed canonical ROM range 0x085888AC-0x0858992F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ Contest picture-frame cool; exact GBA RLE rebuilt from editable asset.
	.incbin "build/graphics/picture_frame/cool.4bpp.rl"
	@ pret/pokeemerald-jp direct xref for 0x08589930: contest_painting.s: sub_08130488
	.globl gContestPaintingData_08589930
gContestPaintingData_08589930: @ 0x08589930
	@ confirmed GBA RLE stream: compressed=0xC30, decompressed=0x1600
sRleBlock_08589930:
	@ analyzed canonical ROM range 0x08589930-0x0858A55F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ Contest picture-frame beauty; exact GBA RLE rebuilt from editable asset.
	.incbin "build/graphics/picture_frame/beauty.4bpp.rl"
	@ pret/pokeemerald-jp direct xref for 0x0858A560: contest_painting.s: sub_08130488
	.globl gContestPaintingData_0858A560
gContestPaintingData_0858A560: @ 0x0858A560
	@ confirmed GBA RLE stream: compressed=0xB36, decompressed=0x1600
sRleBlock_0858A560:
	@ analyzed canonical ROM range 0x0858A560-0x0858B097
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ Contest picture-frame cute; exact GBA RLE rebuilt from editable asset.
	.incbin "build/graphics/picture_frame/cute.4bpp.rl"
	@ pret/pokeemerald-jp direct xref for 0x0858B098: contest_painting.s: sub_08130488
	.globl gContestPaintingData_0858B098
gContestPaintingData_0858B098: @ 0x0858B098
	@ confirmed GBA RLE stream: compressed=0xFB7, decompressed=0x1600
sRleBlock_0858B098:
	@ analyzed canonical ROM range 0x0858B098-0x0858C04F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ Contest picture-frame smart; exact GBA RLE rebuilt from editable asset.
	.incbin "build/graphics/picture_frame/smart.4bpp.rl"
	@ pret/pokeemerald-jp direct xref for 0x0858C050: contest_painting.s: sub_08130488
	.globl gContestPaintingData_0858C050
gContestPaintingData_0858C050: @ 0x0858C050
	@ confirmed GBA RLE stream: compressed=0x112D, decompressed=0x1600
sRleBlock_0858C050:
	@ analyzed canonical ROM range 0x0858C050-0x0858D17F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ Contest picture-frame tough; exact GBA RLE rebuilt from editable asset.
	.incbin "build/graphics/picture_frame/tough.4bpp.rl"
	@ pret/pokeemerald-jp direct xref for 0x0858D180: contest_painting.s: sub_08130488
	.globl gContestPaintingData_0858D180
gContestPaintingData_0858D180: @ 0x0858D180
	@ confirmed GBA RLE stream: compressed=0x603, decompressed=0xAC0
sRleBlock_0858D180:
	@ analyzed canonical ROM range 0x0858D180-0x0858D783
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ Contest picture-frame lobby; exact GBA RLE rebuilt from editable asset.
	.incbin "build/graphics/picture_frame/lobby.4bpp.rl"
	@ pret/pokeemerald-jp direct xref for 0x0858D784: contest_painting.s: sub_08130488
	.globl gContestPaintingData_0858D784
gContestPaintingData_0858D784: @ 0x0858D784
	@ confirmed GBA RLE stream: compressed=0x509, decompressed=0x800
sRleBlock_0858D784:
	@ analyzed canonical ROM range 0x0858D784-0x0858DC8F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ Contest picture-frame cool_map; exact GBA RLE rebuilt from editable asset.
	.incbin "build/graphics/picture_frame/cool_map.bin.rl"
	@ pret/pokeemerald-jp direct xref for 0x0858DC90: contest_painting.s: sub_08130488
	.globl gContestPaintingData_0858DC90
gContestPaintingData_0858DC90: @ 0x0858DC90
	@ confirmed GBA RLE stream: compressed=0x509, decompressed=0x800
sRleBlock_0858DC90:
	@ analyzed canonical ROM range 0x0858DC90-0x0858E19B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ Contest picture-frame beauty_map; exact GBA RLE rebuilt from editable asset.
	.incbin "build/graphics/picture_frame/beauty_map.bin.rl"
	@ pret/pokeemerald-jp direct xref for 0x0858E19C: contest_painting.s: sub_08130488
	.globl gContestPaintingData_0858E19C
gContestPaintingData_0858E19C: @ 0x0858E19C
	@ confirmed GBA RLE stream: compressed=0x509, decompressed=0x800
sRleBlock_0858E19C:
	@ analyzed canonical ROM range 0x0858E19C-0x0858E6A7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ Contest picture-frame cute_map; exact GBA RLE rebuilt from editable asset.
	.incbin "build/graphics/picture_frame/cute_map.bin.rl"
