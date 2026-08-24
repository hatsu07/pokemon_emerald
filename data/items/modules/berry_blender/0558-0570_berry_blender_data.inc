	.globl sText_CommunicationStandby

	@ src/berry_blender.c:278 sText_CommunicationStandby
	.globl sText_CommunicationStandby
sText_CommunicationStandby: @ 0x0830F78E
	.string "つうしんたいきちゅうです{EOS}"
	.if (. - sText_CommunicationStandby) > 0xd
	.error "sText_CommunicationStandby may not grow beyond its original slot"
	.endif
	.if (. - sText_CommunicationStandby) < 0xd
	.space 0xd - (. - sText_CommunicationStandby)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0830F79B: berry_blender.s: CB2_HandleBlenderEndGame
	.globl gBerryBlenderData_0830F79B
gBerryBlenderData_0830F79B: @ 0x0830F79B
	@ analyzed canonical ROM range 0x0830F79B-0x0830F7B1
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x17 bytes=23
	.byte 0x23, 0x03, 0x02, 0x11, 0x45, 0x00, 0x07, 0x19, 0x20, 0x2D, 0x00, 0x1F, 0x3F, 0x1F, 0x0D, 0x06
	.byte 0xAC, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF

	@ src/berry_blender.c:280 sText_RunOutOfBerriesForBlending
	.globl sText_RunOutOfBerriesForBlending
sText_RunOutOfBerriesForBlending: @ 0x0830F7B2
	.string "きのみブレンダーに いれる きのみが\nないので これいじょう できません\p{EOS}"
	.if (. - sText_RunOutOfBerriesForBlending) > 0x26
	.error "sText_RunOutOfBerriesForBlending may not grow beyond its original slot"
	.endif
	.if (. - sText_RunOutOfBerriesForBlending) < 0x26
	.space 0x26 - (. - sText_RunOutOfBerriesForBlending)
	.endif

	@ src/berry_blender.c:281 sText_YourPokeblockCaseIsFull
	.globl sText_YourPokeblockCaseIsFull
sText_YourPokeblockCaseIsFull: @ 0x0830F7D8
	.string "ポロックケースが いっぱいの ようです\p{EOS}"
	.if (. - sText_YourPokeblockCaseIsFull) > 0x15
	.error "sText_YourPokeblockCaseIsFull may not grow beyond its original slot"
	.endif
	.if (. - sText_YourPokeblockCaseIsFull) < 0x15
	.space 0x15 - (. - sText_YourPokeblockCaseIsFull)
	.endif

	@ src/berry_blender.c:282 sText_HasNoBerriesToPut
	.globl sText_HasNoBerriesToPut
sText_HasNoBerriesToPut: @ 0x0830F7ED
	.string "は きのみブレンダーに\nいれる きのみがないようです{EOS}"
	.if (. - sText_HasNoBerriesToPut) > 0x1b
	.error "sText_HasNoBerriesToPut may not grow beyond its original slot"
	.endif
	.if (. - sText_HasNoBerriesToPut) < 0x1b
	.space 0x1b - (. - sText_HasNoBerriesToPut)
	.endif

	@ src/berry_blender.c:283 sText_ApostropheSPokeblockCaseIsFull
	.globl sText_ApostropheSPokeblockCaseIsFull
sText_ApostropheSPokeblockCaseIsFull: @ 0x0830F808
	.string "は ポロックケースが\nいっぱいの ようです\p{EOS}"
	.if (. - sText_ApostropheSPokeblockCaseIsFull) > 0x17
	.error "sText_ApostropheSPokeblockCaseIsFull may not grow beyond its original slot"
	.endif
	.if (. - sText_ApostropheSPokeblockCaseIsFull) < 0x17
	.space 0x17 - (. - sText_ApostropheSPokeblockCaseIsFull)
	.endif

	@ src/berry_blender.c:284 sText_BlendingResults
	.globl sText_BlendingResults
sText_BlendingResults: @ 0x0830F81F
	.string "まぜたけっか{EOS}"
	.if (. - sText_BlendingResults) > 0x7
	.error "sText_BlendingResults may not grow beyond its original slot"
	.endif
	.if (. - sText_BlendingResults) < 0x7
	.space 0x7 - (. - sText_BlendingResults)
	.endif
	@ Decoded text from ROM range: offset=0x30F826, size=0x7
	.string "いれた　たね{EOS}"

	@ asm/berry_blender.s:7852 Blender_PrintBlendingResults
	.globl gText_Rom_30F82D
gText_Rom_30F82D: @ 0x0830F82D
	.string "のみ{EOS}"
	.if (. - gText_Rom_30F82D) > 0x3
	.error "gText_Rom_30F82D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F82D) < 0x3
	.space 0x3 - (. - gText_Rom_30F82D)
	.endif
