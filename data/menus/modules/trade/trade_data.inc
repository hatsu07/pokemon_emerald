.if .L__inc_fragment_select_826ea214a185 == 1
sUnusedStructSizes: @ 0x082FD0B4
	.4byte 0x00000F2C @ sizeof(struct SaveBlock2)
	.4byte 0x00003D88 @ sizeof(struct SaveBlock1)
	.4byte 0x0000001C @ sizeof(struct MapHeader)
	.4byte 0x00000024 @ sizeof(struct Mail) / ObjectEvent / ObjectEventGraphicsInfo
	.4byte 0x00000064 @ sizeof(struct Pokemon) / TrainerCard
	.4byte 0x00000528 @ JP build constant (RS: 0x4D8)

.if (. - sUnusedStructSizes) != 0x18
	.error "sUnusedStructSizes size mismatch"
.endif
	.include "data/trade/trade_early_assets.inc"
	.globl sTradeEarlyTilemap
sTradeEarlyTilemap:
	@ JP trade early/background tilemap
	rodata_tilemap_entry 0, 0, 0, 0 @ [0000] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0001] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0002] raw=0x0000
	rodata_tilemap_entry 9, 0, 0, 0 @ [0003] raw=0x0009
	rodata_tilemap_entry 10, 0, 0, 0 @ [0004] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0005] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0006] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0007] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0008] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0009] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0010] raw=0x000A
	rodata_tilemap_entry 13, 0, 0, 0 @ [0011] raw=0x000D
	rodata_tilemap_entry 0, 0, 0, 0 @ [0012] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0013] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0014] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0015] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0016] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0017] raw=0x0000
	rodata_tilemap_entry 9, 0, 0, 0 @ [0018] raw=0x0009
	rodata_tilemap_entry 10, 0, 0, 0 @ [0019] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0020] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0021] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0022] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0023] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0024] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0025] raw=0x000A
	rodata_tilemap_entry 13, 0, 0, 0 @ [0026] raw=0x000D
	rodata_tilemap_entry 0, 0, 0, 0 @ [0027] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0028] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0029] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0030] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0031] raw=0x0000
	rodata_tilemap_entry 2, 0, 0, 0 @ [0032] raw=0x0002
	rodata_tilemap_entry 3, 0, 0, 0 @ [0033] raw=0x0003
	rodata_tilemap_entry 3, 0, 0, 0 @ [0034] raw=0x0003
	rodata_tilemap_entry 12, 0, 0, 0 @ [0035] raw=0x000C
	rodata_tilemap_entry 11, 0, 0, 0 @ [0036] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0037] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0038] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0039] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0040] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0041] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0042] raw=0x000B
	rodata_tilemap_entry 14, 0, 0, 0 @ [0043] raw=0x000E
	rodata_tilemap_entry 3, 0, 0, 0 @ [0044] raw=0x0003
	rodata_tilemap_entry 3, 0, 0, 0 @ [0045] raw=0x0003
	rodata_tilemap_entry 2, 0, 1, 0 @ [0046] raw=0x0402
	rodata_tilemap_entry 2, 0, 0, 0 @ [0047] raw=0x0002
	rodata_tilemap_entry 3, 0, 0, 0 @ [0048] raw=0x0003
	rodata_tilemap_entry 3, 0, 0, 0 @ [0049] raw=0x0003
	rodata_tilemap_entry 12, 0, 0, 0 @ [0050] raw=0x000C
	rodata_tilemap_entry 11, 0, 0, 0 @ [0051] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0052] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0053] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0054] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0055] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0056] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0057] raw=0x000B
	rodata_tilemap_entry 14, 0, 0, 0 @ [0058] raw=0x000E
	rodata_tilemap_entry 3, 0, 0, 0 @ [0059] raw=0x0003
	rodata_tilemap_entry 3, 0, 0, 0 @ [0060] raw=0x0003
	rodata_tilemap_entry 2, 0, 1, 0 @ [0061] raw=0x0402
	rodata_tilemap_entry 0, 0, 0, 0 @ [0062] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0063] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0064] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0065] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0066] raw=0x0005
	rodata_tilemap_entry 7, 0, 0, 0 @ [0067] raw=0x0007
	rodata_tilemap_entry 8, 0, 0, 0 @ [0068] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0069] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0070] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0071] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0072] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0073] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0074] raw=0x0008
	rodata_tilemap_entry 6, 0, 0, 0 @ [0075] raw=0x0006
	rodata_tilemap_entry 5, 0, 0, 0 @ [0076] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0077] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0078] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0079] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0080] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0081] raw=0x0005
	rodata_tilemap_entry 7, 0, 0, 0 @ [0082] raw=0x0007
	rodata_tilemap_entry 8, 0, 0, 0 @ [0083] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0084] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0085] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0086] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0087] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0088] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0089] raw=0x0008
	rodata_tilemap_entry 6, 0, 0, 0 @ [0090] raw=0x0006
	rodata_tilemap_entry 5, 0, 0, 0 @ [0091] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0092] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0093] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0094] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0095] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0096] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0097] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0098] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0099] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0100] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0101] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0102] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0103] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0104] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0105] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0106] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0107] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0108] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0109] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0110] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0111] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0112] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0113] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0114] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0115] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0116] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0117] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0118] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0119] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0120] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0121] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0122] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0123] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0124] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0125] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0126] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0127] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0128] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0129] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0130] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0131] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0132] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0133] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0134] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0135] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0136] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0137] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0138] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0139] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0140] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0141] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0142] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0143] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0144] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0145] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0146] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0147] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0148] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0149] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0150] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0151] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0152] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0153] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0154] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0155] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0156] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0157] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0158] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0159] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0160] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0161] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0162] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0163] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0164] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0165] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0166] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0167] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0168] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0169] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0170] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0171] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0172] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0173] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0174] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0175] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0176] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0177] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0178] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0179] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0180] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0181] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0182] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0183] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0184] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0185] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0186] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0187] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0188] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0189] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0190] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0191] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0192] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0193] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0194] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0195] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0196] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0197] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0198] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0199] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0200] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0201] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0202] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0203] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0204] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0205] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0206] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0207] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0208] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0209] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0210] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0211] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0212] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0213] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0214] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0215] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0216] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0217] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0218] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0219] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0220] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0221] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0222] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0223] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0224] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0225] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0226] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0227] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0228] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0229] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0230] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0231] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0232] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0233] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0234] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0235] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0236] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0237] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0238] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0239] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0240] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0241] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0242] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0243] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0244] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0245] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0246] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0247] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0248] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0249] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0250] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0251] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0252] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0253] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0254] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0255] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0256] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0257] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0258] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0259] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0260] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0261] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0262] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0263] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0264] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0265] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0266] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0267] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0268] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0269] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0270] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0271] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0272] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0273] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0274] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0275] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0276] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0277] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0278] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0279] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0280] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0281] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0282] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0283] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0284] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0285] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0286] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0287] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0288] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0289] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0290] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0291] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0292] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0293] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0294] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0295] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0296] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0297] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0298] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0299] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0300] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0301] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0302] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0303] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0304] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0305] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0306] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0307] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0308] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0309] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0310] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0311] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0312] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0313] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0314] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0315] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0316] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0317] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0318] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0319] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0320] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0321] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0322] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0323] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0324] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0325] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0326] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0327] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0328] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0329] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0330] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0331] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0332] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0333] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0334] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0335] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0336] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0337] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0338] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0339] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0340] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0341] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0342] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0343] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0344] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0345] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0346] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0347] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0348] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0349] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0350] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0351] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0352] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0353] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0354] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0355] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0356] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0357] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0358] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0359] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0360] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0361] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0362] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0363] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0364] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0365] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0366] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0367] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0368] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0369] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0370] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0371] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0372] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0373] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0374] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0375] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0376] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0377] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0378] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0379] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0380] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0381] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0382] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0383] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0384] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0385] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0386] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0387] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0388] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0389] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0390] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0391] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0392] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0393] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0394] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0395] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0396] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0397] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0398] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0399] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0400] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0401] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0402] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0403] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0404] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0405] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0406] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0407] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0408] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0409] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0410] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0411] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0412] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0413] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0414] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0415] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0416] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0417] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0418] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0419] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0420] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0421] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0422] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0423] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0424] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0425] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0426] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0427] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0428] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0429] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0430] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0431] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0432] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0433] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0434] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0435] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0436] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0437] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0438] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0439] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0440] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0441] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0442] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0443] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0444] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0445] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0446] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0447] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0448] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0449] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0450] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0451] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0452] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0453] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0454] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0455] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0456] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0457] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0458] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0459] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0460] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0461] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0462] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0463] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0464] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0465] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0466] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0467] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0468] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0469] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0470] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0471] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0472] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0473] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0474] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0475] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0476] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0477] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0478] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0479] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0480] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0481] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0482] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0483] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0484] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0485] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0486] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0487] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0488] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0489] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0490] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0491] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0492] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0493] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0494] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0495] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0496] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0497] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0498] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0499] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0500] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0501] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0502] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0503] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0504] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0505] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0506] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0507] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0508] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0509] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0510] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0511] raw=0x0000
	rodata_tilemap_entry 4, 0, 0, 0 @ [0512] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0513] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0514] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0515] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0516] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0517] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0518] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0519] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0520] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0521] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0522] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0523] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0524] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0525] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0526] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0527] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0528] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0529] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0530] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0531] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0532] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0533] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0534] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0535] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0536] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0537] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0538] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0539] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0540] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0541] raw=0x0404
	rodata_tilemap_entry 0, 0, 0, 0 @ [0542] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0543] raw=0x0000
	rodata_tilemap_entry 2, 0, 0, 1 @ [0544] raw=0x0802
	rodata_tilemap_entry 3, 0, 0, 1 @ [0545] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0546] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0547] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0548] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0549] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0550] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0551] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0552] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0553] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0554] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0555] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0556] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0557] raw=0x0803
	rodata_tilemap_entry 2, 0, 1, 1 @ [0558] raw=0x0C02
	rodata_tilemap_entry 2, 0, 0, 1 @ [0559] raw=0x0802
	rodata_tilemap_entry 3, 0, 0, 1 @ [0560] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0561] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0562] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0563] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0564] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0565] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0566] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0567] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0568] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0569] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0570] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0571] raw=0x0803
	rodata_tilemap_entry 3, 0, 0, 1 @ [0572] raw=0x0803
	rodata_tilemap_entry 2, 0, 1, 1 @ [0573] raw=0x0C02
	rodata_tilemap_entry 0, 0, 0, 0 @ [0574] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0575] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0576] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0577] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0578] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0579] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0580] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0581] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0582] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0583] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0584] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0585] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0586] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0587] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0588] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0589] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0590] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0591] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0592] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0593] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0594] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0595] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0596] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0597] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0598] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0599] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0600] raw=0x0000
	rodata_tilemap_entry 23, 0, 0, 0 @ [0601] raw=0x0017
	rodata_tilemap_entry 24, 0, 0, 0 @ [0602] raw=0x0018
	rodata_tilemap_entry 24, 0, 0, 0 @ [0603] raw=0x0018
	rodata_tilemap_entry 24, 0, 0, 0 @ [0604] raw=0x0018
	rodata_tilemap_entry 23, 0, 1, 0 @ [0605] raw=0x0417
	rodata_tilemap_entry 0, 0, 0, 0 @ [0606] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0607] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0608] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0609] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0610] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0611] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0612] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0613] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0614] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0615] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0616] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0617] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0618] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0619] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0620] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0621] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0622] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0623] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0624] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0625] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0626] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0627] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0628] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0629] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0630] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0631] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0632] raw=0x0000
	rodata_tilemap_entry 23, 0, 0, 1 @ [0633] raw=0x0817
	rodata_tilemap_entry 24, 0, 0, 1 @ [0634] raw=0x0818
	rodata_tilemap_entry 24, 0, 0, 1 @ [0635] raw=0x0818
	rodata_tilemap_entry 24, 0, 0, 1 @ [0636] raw=0x0818
	rodata_tilemap_entry 23, 0, 1, 1 @ [0637] raw=0x0C17
	rodata_tilemap_entry 0, 0, 0, 0 @ [0638] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0639] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0640] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0641] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0642] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0643] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0644] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0645] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0646] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0647] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0648] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0649] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0650] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0651] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0652] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0653] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0654] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0655] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0656] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0657] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0658] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0659] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0660] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0661] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0662] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0663] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0664] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0665] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0666] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0667] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0668] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0669] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0670] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0671] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0672] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0673] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0674] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0675] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0676] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0677] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0678] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0679] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0680] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0681] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0682] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0683] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0684] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0685] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0686] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0687] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0688] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0689] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0690] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0691] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0692] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0693] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0694] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0695] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0696] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0697] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0698] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0699] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0700] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0701] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0702] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0703] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0704] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0705] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0706] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0707] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0708] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0709] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0710] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0711] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0712] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0713] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0714] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0715] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0716] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0717] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0718] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0719] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0720] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0721] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0722] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0723] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0724] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0725] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0726] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0727] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0728] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0729] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0730] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0731] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0732] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0733] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0734] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0735] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0736] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0737] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0738] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0739] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0740] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0741] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0742] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0743] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0744] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0745] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0746] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0747] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0748] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0749] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0750] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0751] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0752] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0753] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0754] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0755] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0756] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0757] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0758] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0759] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0760] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0761] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0762] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0763] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0764] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0765] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0766] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0767] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0768] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0769] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0770] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0771] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0772] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0773] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0774] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0775] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0776] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0777] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0778] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0779] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0780] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0781] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0782] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0783] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0784] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0785] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0786] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0787] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0788] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0789] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0790] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0791] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0792] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0793] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0794] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0795] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0796] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0797] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0798] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0799] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0800] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0801] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0802] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0803] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0804] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0805] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0806] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0807] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0808] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0809] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0810] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0811] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0812] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0813] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0814] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0815] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0816] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0817] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0818] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0819] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0820] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0821] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0822] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0823] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0824] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0825] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0826] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0827] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0828] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0829] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0830] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0831] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0832] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0833] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0834] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0835] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0836] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0837] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0838] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0839] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0840] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0841] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0842] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0843] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0844] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0845] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0846] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0847] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0848] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0849] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0850] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0851] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0852] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0853] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0854] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0855] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0856] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0857] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0858] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0859] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0860] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0861] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0862] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0863] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0864] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0865] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0866] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0867] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0868] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0869] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0870] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0871] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0872] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0873] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0874] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0875] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0876] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0877] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0878] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0879] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0880] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0881] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0882] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0883] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0884] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0885] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0886] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0887] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0888] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0889] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0890] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0891] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0892] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0893] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0894] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0895] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0896] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0897] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0898] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0899] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0900] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0901] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0902] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0903] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0904] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0905] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0906] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0907] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0908] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0909] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0910] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0911] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0912] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0913] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0914] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0915] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0916] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0917] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0918] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0919] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0920] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0921] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0922] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0923] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0924] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0925] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0926] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0927] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0928] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0929] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0930] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0931] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0932] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0933] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0934] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0935] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0936] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0937] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0938] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0939] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0940] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0941] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0942] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0943] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0944] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0945] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0946] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0947] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0948] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0949] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0950] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0951] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0952] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0953] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0954] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0955] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0956] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0957] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0958] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0959] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0960] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0961] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0962] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0963] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0964] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0965] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0966] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0967] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0968] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0969] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0970] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0971] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0972] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0973] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0974] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0975] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0976] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0977] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0978] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0979] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0980] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0981] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0982] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0983] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0984] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0985] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0986] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0987] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0988] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0989] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0990] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0991] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0992] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0993] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0994] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0995] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0996] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0997] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0998] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0999] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1000] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1001] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1002] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1003] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1004] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1005] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1006] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1007] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1008] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1009] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1010] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1011] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1012] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1013] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1014] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1015] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1016] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1017] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1018] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1019] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1020] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1021] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1022] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [1023] raw=0x0000
	.globl sTradeMovesBoxTilemap
sTradeMovesBoxTilemap:
	@ graphics/trade/moves_box_map.bin
	rodata_tilemap_entry 0, 0, 0, 0 @ [0000] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0001] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0002] raw=0x0000
	rodata_tilemap_entry 9, 0, 0, 0 @ [0003] raw=0x0009
	rodata_tilemap_entry 10, 0, 0, 0 @ [0004] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0005] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0006] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0007] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0008] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0009] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0010] raw=0x000A
	rodata_tilemap_entry 13, 0, 0, 0 @ [0011] raw=0x000D
	rodata_tilemap_entry 0, 0, 0, 0 @ [0012] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0013] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0014] raw=0x0000
	rodata_tilemap_entry 2, 0, 0, 0 @ [0015] raw=0x0002
	rodata_tilemap_entry 3, 0, 0, 0 @ [0016] raw=0x0003
	rodata_tilemap_entry 3, 0, 0, 0 @ [0017] raw=0x0003
	rodata_tilemap_entry 12, 0, 0, 0 @ [0018] raw=0x000C
	rodata_tilemap_entry 11, 0, 0, 0 @ [0019] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0020] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0021] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0022] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0023] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0024] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0025] raw=0x000B
	rodata_tilemap_entry 14, 0, 0, 0 @ [0026] raw=0x000E
	rodata_tilemap_entry 3, 0, 0, 0 @ [0027] raw=0x0003
	rodata_tilemap_entry 3, 0, 0, 0 @ [0028] raw=0x0003
	rodata_tilemap_entry 2, 0, 1, 0 @ [0029] raw=0x0402
	rodata_tilemap_entry 4, 0, 0, 0 @ [0030] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0031] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0032] raw=0x0005
	rodata_tilemap_entry 7, 0, 0, 0 @ [0033] raw=0x0007
	rodata_tilemap_entry 8, 0, 0, 0 @ [0034] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0035] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0036] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0037] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0038] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0039] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0040] raw=0x0008
	rodata_tilemap_entry 6, 0, 0, 0 @ [0041] raw=0x0006
	rodata_tilemap_entry 5, 0, 0, 0 @ [0042] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0043] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0044] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0045] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0046] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0047] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0048] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0049] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0050] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0051] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0052] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0053] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0054] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0055] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0056] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0057] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0058] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0059] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0060] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0061] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0062] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0063] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0064] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0065] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0066] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0067] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0068] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0069] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0070] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0071] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0072] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0073] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0074] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0075] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0076] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0077] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0078] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0079] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0080] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0081] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0082] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0083] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0084] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0085] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0086] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0087] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0088] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0089] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0090] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0091] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0092] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0093] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0094] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0095] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0096] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0097] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0098] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0099] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0100] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0101] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0102] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0103] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0104] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0105] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0106] raw=0x0005
	rodata_tilemap_entry 32, 0, 0, 0 @ [0107] raw=0x0020
	rodata_tilemap_entry 33, 0, 0, 0 @ [0108] raw=0x0021
	rodata_tilemap_entry 33, 0, 0, 0 @ [0109] raw=0x0021
	rodata_tilemap_entry 33, 0, 0, 0 @ [0110] raw=0x0021
	rodata_tilemap_entry 33, 0, 0, 0 @ [0111] raw=0x0021
	rodata_tilemap_entry 33, 0, 0, 0 @ [0112] raw=0x0021
	rodata_tilemap_entry 33, 0, 0, 0 @ [0113] raw=0x0021
	rodata_tilemap_entry 33, 0, 0, 0 @ [0114] raw=0x0021
	rodata_tilemap_entry 33, 0, 0, 0 @ [0115] raw=0x0021
	rodata_tilemap_entry 33, 0, 0, 0 @ [0116] raw=0x0021
	rodata_tilemap_entry 34, 0, 0, 0 @ [0117] raw=0x0022
	rodata_tilemap_entry 5, 0, 0, 0 @ [0118] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0119] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0120] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0121] raw=0x0005
	rodata_tilemap_entry 48, 0, 0, 0 @ [0122] raw=0x0030
	rodata_tilemap_entry 49, 0, 0, 0 @ [0123] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0124] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0125] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0126] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0127] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0128] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0129] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0130] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0131] raw=0x0031
	rodata_tilemap_entry 48, 0, 1, 1 @ [0132] raw=0x0C30
	rodata_tilemap_entry 5, 0, 0, 0 @ [0133] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0134] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0135] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0136] raw=0x0005
	rodata_tilemap_entry 48, 0, 0, 0 @ [0137] raw=0x0030
	rodata_tilemap_entry 49, 0, 0, 0 @ [0138] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0139] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0140] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0141] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0142] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0143] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0144] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0145] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0146] raw=0x0031
	rodata_tilemap_entry 48, 0, 1, 1 @ [0147] raw=0x0C30
	rodata_tilemap_entry 5, 0, 0, 0 @ [0148] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0149] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0150] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0151] raw=0x0005
	rodata_tilemap_entry 48, 0, 0, 0 @ [0152] raw=0x0030
	rodata_tilemap_entry 49, 0, 0, 0 @ [0153] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0154] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0155] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0156] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0157] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0158] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0159] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0160] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0161] raw=0x0031
	rodata_tilemap_entry 48, 0, 1, 1 @ [0162] raw=0x0C30
	rodata_tilemap_entry 5, 0, 0, 0 @ [0163] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0164] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0165] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0166] raw=0x0005
	rodata_tilemap_entry 48, 0, 0, 0 @ [0167] raw=0x0030
	rodata_tilemap_entry 49, 0, 0, 0 @ [0168] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0169] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0170] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0171] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0172] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0173] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0174] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0175] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0176] raw=0x0031
	rodata_tilemap_entry 48, 0, 1, 1 @ [0177] raw=0x0C30
	rodata_tilemap_entry 5, 0, 0, 0 @ [0178] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0179] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0180] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0181] raw=0x0005
	rodata_tilemap_entry 48, 0, 0, 0 @ [0182] raw=0x0030
	rodata_tilemap_entry 49, 0, 0, 0 @ [0183] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0184] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0185] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0186] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0187] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0188] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0189] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0190] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0191] raw=0x0031
	rodata_tilemap_entry 48, 0, 1, 1 @ [0192] raw=0x0C30
	rodata_tilemap_entry 5, 0, 0, 0 @ [0193] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0194] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0195] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0196] raw=0x0005
	rodata_tilemap_entry 48, 0, 0, 0 @ [0197] raw=0x0030
	rodata_tilemap_entry 49, 0, 0, 0 @ [0198] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0199] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0200] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0201] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0202] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0203] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0204] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0205] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0206] raw=0x0031
	rodata_tilemap_entry 48, 0, 1, 1 @ [0207] raw=0x0C30
	rodata_tilemap_entry 5, 0, 0, 0 @ [0208] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0209] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0210] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0211] raw=0x0005
	rodata_tilemap_entry 48, 0, 0, 0 @ [0212] raw=0x0030
	rodata_tilemap_entry 49, 0, 0, 0 @ [0213] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0214] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0215] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0216] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0217] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0218] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0219] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0220] raw=0x0031
	rodata_tilemap_entry 49, 0, 0, 0 @ [0221] raw=0x0031
	rodata_tilemap_entry 48, 0, 1, 1 @ [0222] raw=0x0C30
	rodata_tilemap_entry 5, 0, 0, 0 @ [0223] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0224] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0225] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0226] raw=0x0005
	rodata_tilemap_entry 34, 0, 1, 1 @ [0227] raw=0x0C22
	rodata_tilemap_entry 33, 0, 1, 1 @ [0228] raw=0x0C21
	rodata_tilemap_entry 33, 0, 1, 1 @ [0229] raw=0x0C21
	rodata_tilemap_entry 33, 0, 1, 1 @ [0230] raw=0x0C21
	rodata_tilemap_entry 33, 0, 1, 1 @ [0231] raw=0x0C21
	rodata_tilemap_entry 33, 0, 1, 1 @ [0232] raw=0x0C21
	rodata_tilemap_entry 33, 0, 1, 1 @ [0233] raw=0x0C21
	rodata_tilemap_entry 33, 0, 1, 1 @ [0234] raw=0x0C21
	rodata_tilemap_entry 33, 0, 1, 1 @ [0235] raw=0x0C21
	rodata_tilemap_entry 33, 0, 1, 1 @ [0236] raw=0x0C21
	rodata_tilemap_entry 32, 0, 1, 1 @ [0237] raw=0x0C20
	rodata_tilemap_entry 5, 0, 0, 0 @ [0238] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0239] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0240] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0241] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0242] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0243] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0244] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0245] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0246] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0247] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0248] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0249] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0250] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0251] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0252] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0253] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0254] raw=0x0404
	.globl sTradePartyBoxTilemap
sTradePartyBoxTilemap:
	@ graphics/trade/party_box_map.bin
	rodata_tilemap_entry 0, 0, 0, 0 @ [0000] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0001] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0002] raw=0x0000
	rodata_tilemap_entry 9, 0, 0, 0 @ [0003] raw=0x0009
	rodata_tilemap_entry 10, 0, 0, 0 @ [0004] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0005] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0006] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0007] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0008] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0009] raw=0x000A
	rodata_tilemap_entry 10, 0, 0, 0 @ [0010] raw=0x000A
	rodata_tilemap_entry 13, 0, 0, 0 @ [0011] raw=0x000D
	rodata_tilemap_entry 0, 0, 0, 0 @ [0012] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0013] raw=0x0000
	rodata_tilemap_entry 0, 0, 0, 0 @ [0014] raw=0x0000
	rodata_tilemap_entry 2, 0, 0, 0 @ [0015] raw=0x0002
	rodata_tilemap_entry 3, 0, 0, 0 @ [0016] raw=0x0003
	rodata_tilemap_entry 3, 0, 0, 0 @ [0017] raw=0x0003
	rodata_tilemap_entry 12, 0, 0, 0 @ [0018] raw=0x000C
	rodata_tilemap_entry 11, 0, 0, 0 @ [0019] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0020] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0021] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0022] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0023] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0024] raw=0x000B
	rodata_tilemap_entry 11, 0, 0, 0 @ [0025] raw=0x000B
	rodata_tilemap_entry 14, 0, 0, 0 @ [0026] raw=0x000E
	rodata_tilemap_entry 3, 0, 0, 0 @ [0027] raw=0x0003
	rodata_tilemap_entry 3, 0, 0, 0 @ [0028] raw=0x0003
	rodata_tilemap_entry 2, 0, 1, 0 @ [0029] raw=0x0402
	rodata_tilemap_entry 4, 0, 0, 0 @ [0030] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0031] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0032] raw=0x0005
	rodata_tilemap_entry 7, 0, 0, 0 @ [0033] raw=0x0007
	rodata_tilemap_entry 8, 0, 0, 0 @ [0034] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0035] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0036] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0037] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0038] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0039] raw=0x0008
	rodata_tilemap_entry 8, 0, 0, 0 @ [0040] raw=0x0008
	rodata_tilemap_entry 6, 0, 0, 0 @ [0041] raw=0x0006
	rodata_tilemap_entry 5, 0, 0, 0 @ [0042] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0043] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0044] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0045] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0046] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0047] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0048] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0049] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0050] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0051] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0052] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0053] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0054] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0055] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0056] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0057] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0058] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0059] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0060] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0061] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0062] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0063] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0064] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0065] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0066] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0067] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0068] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0069] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0070] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0071] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0072] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0073] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0074] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0075] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0076] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0077] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0078] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0079] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0080] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0081] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0082] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0083] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0084] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0085] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0086] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0087] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0088] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0089] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0090] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0091] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0092] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0093] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0094] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0095] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0096] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0097] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0098] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0099] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0100] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0101] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0102] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0103] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0104] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0105] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0106] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0107] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0108] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0109] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0110] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0111] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0112] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0113] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0114] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0115] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0116] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0117] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0118] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0119] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0120] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0121] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0122] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0123] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0124] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0125] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0126] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0127] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0128] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0129] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0130] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0131] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0132] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0133] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0134] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0135] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0136] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0137] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0138] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0139] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0140] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0141] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0142] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0143] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0144] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0145] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0146] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0147] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0148] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0149] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0150] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0151] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0152] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0153] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0154] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0155] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0156] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0157] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0158] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0159] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0160] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0161] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0162] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0163] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0164] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0165] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0166] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0167] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0168] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0169] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0170] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0171] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0172] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0173] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0174] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0175] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0176] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0177] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0178] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0179] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0180] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0181] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0182] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0183] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0184] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0185] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0186] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0187] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0188] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0189] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0190] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0191] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0192] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0193] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0194] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0195] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0196] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0197] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0198] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0199] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0200] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0201] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0202] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0203] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0204] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0205] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0206] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0207] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0208] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0209] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0210] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0211] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0212] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0213] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0214] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0215] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0216] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0217] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0218] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0219] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0220] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0221] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0222] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0223] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0224] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0225] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0226] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0227] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0228] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0229] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0230] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0231] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0232] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0233] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0234] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0235] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0236] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0237] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0238] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0239] raw=0x0404
	rodata_tilemap_entry 4, 0, 0, 0 @ [0240] raw=0x0004
	rodata_tilemap_entry 5, 0, 0, 0 @ [0241] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0242] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0243] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0244] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0245] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0246] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0247] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0248] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0249] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0250] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0251] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0252] raw=0x0005
	rodata_tilemap_entry 5, 0, 0, 0 @ [0253] raw=0x0005
	rodata_tilemap_entry 4, 0, 1, 0 @ [0254] raw=0x0404
	.globl sTradeStripesBG2Tilemap
sTradeStripesBG2Tilemap:
	@ graphics/trade/stripes_bg2_map.bin
	rodata_tilemap_entry 64, 1, 0, 0 @ [0000] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0001] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0002] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0003] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0004] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0005] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0006] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0007] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0008] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0009] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0010] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0011] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0012] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0013] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0014] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0015] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0016] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0017] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0018] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0019] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0020] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0021] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0022] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0023] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0024] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0025] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0026] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0027] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0028] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0029] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0030] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0031] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0032] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0033] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0034] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0035] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0036] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0037] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0038] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0039] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0040] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0041] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0042] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0043] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0044] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0045] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0046] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0047] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0048] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0049] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0050] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0051] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0052] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0053] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0054] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0055] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0056] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0057] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0058] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0059] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0060] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0061] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0062] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0063] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0064] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0065] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0066] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0067] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0068] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0069] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0070] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0071] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0072] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0073] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0074] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0075] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0076] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0077] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0078] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0079] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0080] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0081] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0082] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0083] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0084] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0085] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0086] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0087] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0088] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0089] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0090] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0091] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0092] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0093] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0094] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0095] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0096] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0097] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0098] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0099] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0100] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0101] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0102] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0103] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0104] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0105] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0106] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0107] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0108] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0109] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0110] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0111] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0112] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0113] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0114] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0115] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0116] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0117] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0118] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0119] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0120] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0121] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0122] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0123] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0124] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0125] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0126] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0127] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0128] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0129] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0130] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0131] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0132] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0133] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0134] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0135] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0136] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0137] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0138] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0139] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0140] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0141] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0142] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0143] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0144] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0145] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0146] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0147] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0148] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0149] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0150] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0151] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0152] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0153] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0154] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0155] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0156] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0157] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0158] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0159] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0160] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0161] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0162] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0163] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0164] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0165] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0166] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0167] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0168] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0169] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0170] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0171] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0172] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0173] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0174] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0175] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0176] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0177] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0178] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0179] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0180] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0181] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0182] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0183] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0184] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0185] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0186] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0187] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0188] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0189] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0190] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0191] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0192] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0193] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0194] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0195] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0196] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0197] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0198] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0199] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0200] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0201] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0202] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0203] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0204] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0205] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0206] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0207] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0208] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0209] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0210] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0211] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0212] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0213] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0214] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0215] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0216] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0217] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0218] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0219] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0220] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0221] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0222] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0223] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0224] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0225] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0226] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0227] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0228] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0229] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0230] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0231] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0232] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0233] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0234] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0235] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0236] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0237] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0238] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0239] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0240] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0241] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0242] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0243] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0244] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0245] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0246] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0247] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0248] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0249] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0250] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0251] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0252] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0253] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0254] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0255] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0256] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0257] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0258] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0259] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0260] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0261] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0262] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0263] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0264] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0265] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0266] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0267] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0268] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0269] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0270] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0271] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0272] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0273] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0274] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0275] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0276] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0277] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0278] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0279] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0280] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0281] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0282] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0283] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0284] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0285] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0286] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0287] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0288] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0289] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0290] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0291] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0292] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0293] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0294] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0295] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0296] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0297] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0298] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0299] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0300] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0301] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0302] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0303] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0304] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0305] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0306] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0307] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0308] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0309] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0310] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0311] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0312] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0313] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0314] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0315] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0316] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0317] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0318] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0319] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0320] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0321] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0322] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0323] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0324] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0325] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0326] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0327] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0328] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0329] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0330] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0331] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0332] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0333] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0334] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0335] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0336] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0337] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0338] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0339] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0340] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0341] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0342] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0343] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0344] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0345] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0346] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0347] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0348] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0349] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0350] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0351] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0352] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0353] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0354] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0355] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0356] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0357] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0358] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0359] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0360] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0361] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0362] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0363] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0364] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0365] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0366] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0367] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0368] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0369] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0370] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0371] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0372] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0373] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0374] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0375] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0376] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0377] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0378] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0379] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0380] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0381] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0382] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0383] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0384] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0385] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0386] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0387] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0388] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0389] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0390] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0391] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0392] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0393] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0394] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0395] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0396] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0397] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0398] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0399] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0400] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0401] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0402] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0403] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0404] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0405] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0406] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0407] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0408] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0409] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0410] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0411] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0412] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0413] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0414] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0415] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0416] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0417] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0418] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0419] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0420] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0421] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0422] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0423] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0424] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0425] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0426] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0427] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0428] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0429] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0430] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0431] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0432] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0433] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0434] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0435] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0436] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0437] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0438] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0439] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0440] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0441] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0442] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0443] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0444] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0445] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0446] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0447] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0448] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0449] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0450] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0451] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0452] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0453] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0454] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0455] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0456] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0457] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0458] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0459] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0460] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0461] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0462] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0463] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0464] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0465] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0466] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0467] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0468] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0469] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0470] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0471] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0472] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0473] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0474] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0475] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0476] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0477] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0478] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0479] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0480] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0481] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0482] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0483] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0484] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0485] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0486] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0487] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0488] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0489] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0490] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0491] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0492] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0493] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0494] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0495] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0496] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0497] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0498] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0499] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0500] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0501] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0502] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0503] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0504] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0505] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0506] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0507] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0508] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0509] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0510] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0511] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0512] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0513] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0514] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0515] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0516] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0517] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0518] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0519] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0520] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0521] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0522] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0523] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0524] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0525] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0526] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0527] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0528] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0529] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0530] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0531] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0532] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0533] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0534] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0535] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0536] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0537] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0538] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0539] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0540] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0541] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0542] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0543] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0544] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0545] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0546] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0547] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0548] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0549] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0550] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0551] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0552] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0553] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0554] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0555] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0556] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0557] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0558] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0559] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0560] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0561] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0562] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0563] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0564] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0565] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0566] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0567] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0568] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0569] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0570] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0571] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0572] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0573] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0574] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0575] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0576] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0577] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0578] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0579] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0580] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0581] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0582] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0583] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0584] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0585] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0586] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0587] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0588] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0589] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0590] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0591] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0592] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0593] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0594] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0595] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0596] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0597] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0598] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0599] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0600] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0601] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0602] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0603] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0604] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0605] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0606] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0607] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0608] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0609] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0610] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0611] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0612] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0613] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0614] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0615] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0616] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0617] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0618] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0619] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0620] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0621] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0622] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0623] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0624] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0625] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0626] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0627] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0628] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0629] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0630] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0631] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0632] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0633] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0634] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0635] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0636] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0637] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0638] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0639] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0640] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0641] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0642] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0643] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0644] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0645] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0646] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0647] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0648] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0649] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0650] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0651] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0652] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0653] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0654] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0655] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0656] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0657] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0658] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0659] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0660] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0661] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0662] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0663] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0664] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0665] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0666] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0667] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0668] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0669] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0670] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0671] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0672] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0673] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0674] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0675] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0676] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0677] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0678] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0679] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0680] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0681] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0682] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0683] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0684] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0685] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0686] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0687] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0688] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0689] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0690] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0691] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0692] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0693] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0694] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0695] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0696] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0697] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0698] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0699] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0700] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0701] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0702] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0703] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0704] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0705] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0706] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0707] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0708] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0709] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0710] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0711] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0712] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0713] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0714] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0715] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0716] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0717] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0718] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0719] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0720] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0721] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0722] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0723] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0724] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0725] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0726] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0727] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0728] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0729] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0730] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0731] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0732] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0733] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0734] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0735] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0736] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0737] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0738] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0739] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0740] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0741] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0742] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0743] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0744] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0745] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0746] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0747] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0748] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0749] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0750] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0751] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0752] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0753] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0754] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0755] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0756] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0757] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0758] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0759] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0760] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0761] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0762] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0763] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0764] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0765] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0766] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0767] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0768] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0769] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0770] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0771] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0772] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0773] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0774] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0775] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0776] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0777] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0778] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0779] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0780] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0781] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0782] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0783] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0784] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0785] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0786] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0787] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0788] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0789] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0790] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0791] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0792] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0793] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0794] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0795] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0796] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0797] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0798] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0799] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0800] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0801] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0802] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0803] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0804] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0805] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0806] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0807] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0808] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0809] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0810] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0811] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0812] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0813] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0814] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0815] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0816] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0817] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0818] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0819] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0820] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0821] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0822] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0823] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0824] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0825] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0826] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0827] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0828] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0829] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0830] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0831] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0832] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0833] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0834] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0835] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0836] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0837] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0838] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0839] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0840] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0841] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0842] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0843] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0844] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0845] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0846] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0847] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0848] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0849] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0850] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0851] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0852] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0853] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0854] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0855] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0856] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0857] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0858] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0859] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0860] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0861] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0862] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0863] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0864] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0865] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0866] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0867] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0868] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0869] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0870] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0871] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0872] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0873] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0874] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0875] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0876] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0877] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0878] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0879] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0880] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0881] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0882] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0883] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0884] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0885] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0886] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0887] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0888] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0889] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0890] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0891] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0892] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0893] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0894] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0895] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0896] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0897] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0898] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0899] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0900] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0901] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0902] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0903] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0904] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0905] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0906] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0907] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0908] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0909] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0910] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0911] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0912] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0913] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0914] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0915] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0916] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0917] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0918] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0919] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0920] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0921] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0922] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0923] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0924] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0925] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0926] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0927] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0928] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0929] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0930] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0931] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0932] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0933] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0934] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0935] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0936] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0937] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0938] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0939] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0940] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0941] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0942] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0943] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0944] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0945] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0946] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0947] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0948] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0949] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0950] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0951] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0952] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0953] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0954] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0955] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0956] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0957] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0958] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0959] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0960] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0961] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0962] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0963] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0964] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0965] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0966] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0967] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [0968] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [0969] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [0970] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [0971] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [0972] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [0973] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [0974] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [0975] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [0976] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [0977] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [0978] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [0979] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [0980] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [0981] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [0982] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [0983] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0984] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [0985] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [0986] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [0987] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [0988] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [0989] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [0990] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [0991] raw=0x1040
	rodata_tilemap_entry 64, 1, 0, 0 @ [0992] raw=0x1040
	rodata_tilemap_entry 65, 1, 0, 0 @ [0993] raw=0x1041
	rodata_tilemap_entry 66, 1, 0, 0 @ [0994] raw=0x1042
	rodata_tilemap_entry 67, 1, 0, 0 @ [0995] raw=0x1043
	rodata_tilemap_entry 68, 1, 0, 0 @ [0996] raw=0x1044
	rodata_tilemap_entry 69, 1, 0, 0 @ [0997] raw=0x1045
	rodata_tilemap_entry 70, 1, 0, 0 @ [0998] raw=0x1046
	rodata_tilemap_entry 71, 1, 0, 0 @ [0999] raw=0x1047
	rodata_tilemap_entry 72, 1, 0, 0 @ [1000] raw=0x1048
	rodata_tilemap_entry 73, 1, 0, 0 @ [1001] raw=0x1049
	rodata_tilemap_entry 74, 1, 0, 0 @ [1002] raw=0x104A
	rodata_tilemap_entry 75, 1, 0, 0 @ [1003] raw=0x104B
	rodata_tilemap_entry 76, 1, 0, 0 @ [1004] raw=0x104C
	rodata_tilemap_entry 77, 1, 0, 0 @ [1005] raw=0x104D
	rodata_tilemap_entry 78, 1, 0, 0 @ [1006] raw=0x104E
	rodata_tilemap_entry 79, 1, 0, 0 @ [1007] raw=0x104F
	rodata_tilemap_entry 79, 1, 0, 0 @ [1008] raw=0x104F
	rodata_tilemap_entry 78, 1, 0, 0 @ [1009] raw=0x104E
	rodata_tilemap_entry 77, 1, 0, 0 @ [1010] raw=0x104D
	rodata_tilemap_entry 76, 1, 0, 0 @ [1011] raw=0x104C
	rodata_tilemap_entry 75, 1, 0, 0 @ [1012] raw=0x104B
	rodata_tilemap_entry 74, 1, 0, 0 @ [1013] raw=0x104A
	rodata_tilemap_entry 73, 1, 0, 0 @ [1014] raw=0x1049
	rodata_tilemap_entry 72, 1, 0, 0 @ [1015] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [1016] raw=0x1048
	rodata_tilemap_entry 72, 1, 0, 0 @ [1017] raw=0x1048
	rodata_tilemap_entry 70, 1, 0, 0 @ [1018] raw=0x1046
	rodata_tilemap_entry 68, 1, 0, 0 @ [1019] raw=0x1044
	rodata_tilemap_entry 67, 1, 0, 0 @ [1020] raw=0x1043
	rodata_tilemap_entry 66, 1, 0, 0 @ [1021] raw=0x1042
	rodata_tilemap_entry 65, 1, 0, 0 @ [1022] raw=0x1041
	rodata_tilemap_entry 64, 1, 0, 0 @ [1023] raw=0x1040
	.globl sTradeStripesBG3Tilemap
sTradeStripesBG3Tilemap:
	@ graphics/trade/stripes_bg3_map.bin
	rodata_tilemap_entry 80, 2, 0, 0 @ [0000] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0001] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0002] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0003] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0004] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0005] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0006] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0007] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0008] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0009] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0010] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0011] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0012] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0013] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0014] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0015] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0016] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0017] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0018] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0019] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0020] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0021] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0022] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0023] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0024] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0025] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0026] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0027] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0028] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0029] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0030] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0031] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0032] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0033] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0034] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0035] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0036] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0037] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0038] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0039] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0040] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0041] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0042] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0043] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0044] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0045] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0046] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0047] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0048] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0049] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0050] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0051] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0052] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0053] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0054] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0055] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0056] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0057] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0058] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0059] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0060] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0061] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0062] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0063] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0064] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0065] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0066] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0067] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0068] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0069] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0070] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0071] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0072] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0073] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0074] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0075] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0076] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0077] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0078] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0079] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0080] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0081] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0082] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0083] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0084] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0085] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0086] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0087] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0088] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0089] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0090] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0091] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0092] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0093] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0094] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0095] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0096] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0097] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0098] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0099] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0100] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0101] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0102] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0103] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0104] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0105] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0106] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0107] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0108] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0109] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0110] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0111] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0112] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0113] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0114] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0115] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0116] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0117] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0118] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0119] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0120] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0121] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0122] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0123] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0124] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0125] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0126] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0127] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0128] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0129] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0130] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0131] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0132] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0133] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0134] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0135] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0136] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0137] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0138] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0139] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0140] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0141] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0142] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0143] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0144] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0145] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0146] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0147] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0148] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0149] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0150] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0151] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0152] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0153] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0154] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0155] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0156] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0157] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0158] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0159] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0160] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0161] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0162] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0163] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0164] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0165] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0166] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0167] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0168] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0169] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0170] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0171] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0172] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0173] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0174] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0175] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0176] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0177] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0178] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0179] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0180] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0181] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0182] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0183] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0184] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0185] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0186] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0187] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0188] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0189] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0190] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0191] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0192] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0193] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0194] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0195] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0196] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0197] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0198] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0199] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0200] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0201] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0202] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0203] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0204] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0205] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0206] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0207] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0208] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0209] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0210] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0211] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0212] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0213] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0214] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0215] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0216] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0217] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0218] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0219] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0220] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0221] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0222] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0223] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0224] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0225] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0226] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0227] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0228] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0229] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0230] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0231] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0232] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0233] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0234] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0235] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0236] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0237] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0238] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0239] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0240] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0241] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0242] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0243] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0244] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0245] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0246] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0247] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0248] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0249] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0250] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0251] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0252] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0253] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0254] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0255] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0256] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0257] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0258] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0259] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0260] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0261] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0262] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0263] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0264] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0265] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0266] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0267] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0268] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0269] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0270] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0271] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0272] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0273] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0274] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0275] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0276] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0277] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0278] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0279] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0280] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0281] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0282] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0283] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0284] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0285] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0286] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0287] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0288] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0289] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0290] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0291] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0292] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0293] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0294] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0295] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0296] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0297] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0298] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0299] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0300] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0301] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0302] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0303] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0304] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0305] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0306] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0307] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0308] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0309] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0310] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0311] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0312] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0313] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0314] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0315] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0316] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0317] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0318] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0319] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0320] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0321] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0322] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0323] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0324] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0325] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0326] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0327] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0328] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0329] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0330] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0331] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0332] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0333] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0334] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0335] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0336] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0337] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0338] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0339] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0340] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0341] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0342] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0343] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0344] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0345] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0346] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0347] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0348] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0349] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0350] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0351] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0352] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0353] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0354] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0355] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0356] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0357] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0358] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0359] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0360] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0361] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0362] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0363] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0364] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0365] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0366] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0367] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0368] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0369] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0370] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0371] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0372] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0373] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0374] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0375] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0376] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0377] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0378] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0379] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0380] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0381] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0382] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0383] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0384] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0385] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0386] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0387] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0388] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0389] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0390] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0391] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0392] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0393] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0394] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0395] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0396] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0397] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0398] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0399] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0400] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0401] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0402] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0403] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0404] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0405] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0406] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0407] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0408] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0409] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0410] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0411] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0412] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0413] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0414] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0415] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0416] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0417] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0418] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0419] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0420] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0421] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0422] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0423] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0424] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0425] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0426] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0427] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0428] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0429] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0430] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0431] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0432] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0433] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0434] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0435] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0436] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0437] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0438] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0439] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0440] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0441] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0442] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0443] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0444] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0445] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0446] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0447] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0448] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0449] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0450] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0451] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0452] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0453] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0454] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0455] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0456] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0457] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0458] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0459] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0460] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0461] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0462] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0463] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0464] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0465] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0466] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0467] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0468] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0469] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0470] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0471] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0472] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0473] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0474] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0475] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0476] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0477] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0478] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0479] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0480] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0481] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0482] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0483] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0484] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0485] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0486] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0487] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0488] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0489] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0490] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0491] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0492] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0493] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0494] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0495] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0496] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0497] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0498] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0499] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0500] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0501] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0502] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0503] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0504] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0505] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0506] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0507] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0508] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0509] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0510] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0511] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0512] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0513] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0514] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0515] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0516] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0517] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0518] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0519] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0520] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0521] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0522] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0523] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0524] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0525] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0526] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0527] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0528] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0529] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0530] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0531] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0532] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0533] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0534] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0535] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0536] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0537] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0538] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0539] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0540] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0541] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0542] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0543] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0544] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0545] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0546] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0547] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0548] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0549] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0550] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0551] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0552] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0553] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0554] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0555] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0556] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0557] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0558] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0559] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0560] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0561] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0562] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0563] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0564] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0565] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0566] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0567] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0568] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0569] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0570] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0571] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0572] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0573] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0574] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0575] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0576] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0577] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0578] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0579] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0580] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0581] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0582] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0583] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0584] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0585] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0586] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0587] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0588] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0589] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0590] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0591] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0592] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0593] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0594] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0595] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0596] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0597] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0598] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0599] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0600] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0601] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0602] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0603] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0604] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0605] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0606] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0607] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0608] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0609] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0610] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0611] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0612] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0613] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0614] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0615] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0616] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0617] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0618] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0619] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0620] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0621] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0622] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0623] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0624] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0625] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0626] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0627] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0628] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0629] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0630] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0631] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0632] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0633] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0634] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0635] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0636] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0637] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0638] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0639] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0640] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0641] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0642] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0643] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0644] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0645] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0646] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0647] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0648] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0649] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0650] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0651] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0652] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0653] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0654] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0655] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0656] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0657] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0658] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0659] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0660] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0661] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0662] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0663] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0664] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0665] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0666] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0667] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0668] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0669] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0670] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0671] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0672] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0673] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0674] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0675] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0676] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0677] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0678] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0679] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0680] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0681] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0682] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0683] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0684] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0685] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0686] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0687] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0688] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0689] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0690] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0691] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0692] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0693] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0694] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0695] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0696] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0697] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0698] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0699] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0700] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0701] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0702] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0703] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0704] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0705] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0706] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0707] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0708] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0709] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0710] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0711] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0712] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0713] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0714] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0715] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0716] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0717] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0718] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0719] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0720] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0721] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0722] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0723] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0724] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0725] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0726] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0727] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0728] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0729] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0730] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0731] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0732] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0733] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0734] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0735] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0736] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0737] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0738] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0739] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0740] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0741] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0742] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0743] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0744] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0745] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0746] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0747] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0748] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0749] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0750] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0751] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0752] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0753] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0754] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0755] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0756] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0757] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0758] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0759] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0760] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0761] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0762] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0763] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0764] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0765] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0766] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0767] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0768] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0769] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0770] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0771] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0772] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0773] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0774] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0775] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0776] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0777] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0778] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0779] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0780] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0781] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0782] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0783] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0784] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0785] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0786] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0787] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0788] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0789] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0790] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0791] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0792] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0793] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0794] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0795] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0796] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0797] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0798] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0799] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0800] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0801] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0802] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0803] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0804] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0805] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0806] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0807] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0808] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0809] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0810] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0811] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0812] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0813] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0814] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0815] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0816] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0817] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0818] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0819] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0820] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0821] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0822] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0823] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0824] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0825] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0826] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0827] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0828] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0829] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0830] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0831] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0832] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0833] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0834] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0835] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0836] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0837] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0838] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0839] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0840] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0841] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0842] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0843] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0844] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0845] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0846] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0847] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0848] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0849] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0850] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0851] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0852] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0853] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0854] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0855] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0856] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0857] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0858] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0859] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0860] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0861] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0862] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0863] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0864] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0865] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0866] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0867] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0868] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0869] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0870] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0871] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0872] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0873] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0874] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0875] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0876] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0877] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0878] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0879] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0880] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0881] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0882] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0883] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0884] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0885] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0886] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0887] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0888] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0889] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0890] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0891] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0892] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0893] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0894] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0895] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0896] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0897] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0898] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0899] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0900] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0901] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0902] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0903] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0904] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0905] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0906] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0907] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0908] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0909] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0910] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0911] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0912] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0913] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0914] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0915] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0916] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0917] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0918] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0919] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0920] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0921] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0922] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0923] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0924] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0925] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0926] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0927] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0928] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0929] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0930] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0931] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0932] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0933] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0934] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0935] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0936] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0937] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0938] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0939] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0940] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0941] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0942] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0943] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0944] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0945] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0946] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0947] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0948] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0949] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0950] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0951] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0952] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0953] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0954] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0955] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0956] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0957] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0958] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0959] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0960] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0961] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0962] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0963] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0964] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0965] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0966] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0967] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [0968] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [0969] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [0970] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [0971] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [0972] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [0973] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [0974] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [0975] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [0976] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [0977] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [0978] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [0979] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [0980] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [0981] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [0982] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [0983] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [0984] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [0985] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [0986] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [0987] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [0988] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [0989] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [0990] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [0991] raw=0x2050
	rodata_tilemap_entry 80, 2, 0, 0 @ [0992] raw=0x2050
	rodata_tilemap_entry 81, 2, 0, 0 @ [0993] raw=0x2051
	rodata_tilemap_entry 82, 2, 0, 0 @ [0994] raw=0x2052
	rodata_tilemap_entry 83, 2, 0, 0 @ [0995] raw=0x2053
	rodata_tilemap_entry 84, 2, 0, 0 @ [0996] raw=0x2054
	rodata_tilemap_entry 85, 2, 0, 0 @ [0997] raw=0x2055
	rodata_tilemap_entry 86, 2, 0, 0 @ [0998] raw=0x2056
	rodata_tilemap_entry 87, 2, 0, 0 @ [0999] raw=0x2057
	rodata_tilemap_entry 88, 2, 0, 0 @ [1000] raw=0x2058
	rodata_tilemap_entry 89, 2, 0, 0 @ [1001] raw=0x2059
	rodata_tilemap_entry 90, 2, 0, 0 @ [1002] raw=0x205A
	rodata_tilemap_entry 91, 2, 0, 0 @ [1003] raw=0x205B
	rodata_tilemap_entry 92, 2, 0, 0 @ [1004] raw=0x205C
	rodata_tilemap_entry 93, 2, 0, 0 @ [1005] raw=0x205D
	rodata_tilemap_entry 94, 2, 0, 0 @ [1006] raw=0x205E
	rodata_tilemap_entry 95, 2, 0, 0 @ [1007] raw=0x205F
	rodata_tilemap_entry 94, 2, 0, 0 @ [1008] raw=0x205E
	rodata_tilemap_entry 93, 2, 0, 0 @ [1009] raw=0x205D
	rodata_tilemap_entry 92, 2, 0, 0 @ [1010] raw=0x205C
	rodata_tilemap_entry 91, 2, 0, 0 @ [1011] raw=0x205B
	rodata_tilemap_entry 90, 2, 0, 0 @ [1012] raw=0x205A
	rodata_tilemap_entry 89, 2, 0, 0 @ [1013] raw=0x2059
	rodata_tilemap_entry 88, 2, 0, 0 @ [1014] raw=0x2058
	rodata_tilemap_entry 87, 2, 0, 0 @ [1015] raw=0x2057
	rodata_tilemap_entry 86, 2, 0, 0 @ [1016] raw=0x2056
	rodata_tilemap_entry 86, 2, 0, 0 @ [1017] raw=0x2056
	rodata_tilemap_entry 85, 2, 0, 0 @ [1018] raw=0x2055
	rodata_tilemap_entry 84, 2, 0, 0 @ [1019] raw=0x2054
	rodata_tilemap_entry 83, 2, 0, 0 @ [1020] raw=0x2053
	rodata_tilemap_entry 82, 2, 0, 0 @ [1021] raw=0x2052
	rodata_tilemap_entry 81, 2, 0, 0 @ [1022] raw=0x2051
	rodata_tilemap_entry 80, 2, 0, 0 @ [1023] raw=0x2050
	@ pret/pokeemerald-jp direct xref for 0x082FFFC8: trade.s: sub_08079740
	.globl gTradeData_082FFFC8
gTradeData_082FFFC8: @ 0x082FFFC8
	@ analyzed canonical ROM range 0x082FFFC8-0x08300833
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x86C bytes=2156
	.byte 0x80, 0x00, 0x81, 0x00, 0x81, 0x00, 0x81, 0x00, 0x82, 0x00, 0x83, 0x00, 0x90, 0x00, 0x90, 0x00
	.byte 0x90, 0x00, 0x90, 0x00, 0x90, 0x00, 0x90, 0x04, 0x92, 0x00, 0x91, 0x00, 0x91, 0x00, 0x91, 0x00
	.byte 0x91, 0x00, 0x92, 0x04, 0xC0, 0xCC, 0xCC, 0xCC, 0xDC, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0xCD, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00
	.byte 0x0D, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x0C, 0xDD, 0xDD, 0xDD, 0xCD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0xDC, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0
	.byte 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00
	.byte 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0
	.byte 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00
	.byte 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00
	.byte 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0
	.byte 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0xD0
	.byte 0x00, 0x00, 0x00, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDC, 0xDD, 0xDD, 0xDD
	.byte 0xC0, 0xCC, 0xCC, 0xCC, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xCC, 0xCC, 0xCC, 0xCC, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xCC, 0xCC, 0xCC, 0xCC, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xCC, 0xCC, 0xCC, 0xCC, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xCC, 0xCC, 0xCC, 0xCC, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD
	.byte 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xCD
	.byte 0xCC, 0xCC, 0xCC, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xF0, 0xAF, 0x99
	.byte 0x00, 0xF0, 0x9F, 0x99, 0x00, 0xF0, 0x9F, 0x99, 0x00, 0xF0, 0x9F, 0x99, 0x00, 0xF0, 0x9F, 0x99
	.byte 0x00, 0xF0, 0x9F, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99
	.byte 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99
	.byte 0x99, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99
	.byte 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99
	.byte 0x99, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99
	.byte 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99
	.byte 0x99, 0x99, 0x99, 0x99, 0xFF, 0xCF, 0x00, 0x00, 0xFF, 0xFF, 0x0C, 0x00, 0x99, 0xFA, 0x0F, 0x00
	.byte 0x99, 0xF9, 0x0F, 0x00, 0x99, 0xF9, 0x0F, 0x00, 0x99, 0xF9, 0x0F, 0x00, 0x99, 0xF9, 0x0F, 0x00
	.byte 0x99, 0xF9, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x9F, 0x99, 0x00, 0xF0, 0x9F, 0x99, 0x00, 0xF0, 0x9F, 0x99
	.byte 0x00, 0xF0, 0x9F, 0x99, 0x00, 0xF0, 0x9F, 0x99, 0x00, 0xF0, 0xAF, 0x99, 0x00, 0xC0, 0xFF, 0xFF
	.byte 0x00, 0x00, 0xFC, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99
	.byte 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99
	.byte 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99
	.byte 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xFF, 0xFF, 0xFF, 0xFF
	.byte 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0xF9, 0x0F, 0x00, 0x99, 0xF9, 0x0F, 0x00, 0x99, 0xF9, 0x0F, 0x00
	.byte 0x99, 0xF9, 0x0F, 0x00, 0x99, 0xF9, 0x0F, 0x00, 0x99, 0xFA, 0x0F, 0x00, 0xFF, 0xFF, 0x0C, 0x00
	.byte 0xFF, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99
	.byte 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x09
	.byte 0x99, 0x99, 0x99, 0x00, 0x00, 0x40, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0xC0
	.byte 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x00, 0x05, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0x1C, 0x08, 0x30, 0x08, 0x24, 0x08, 0x30, 0x08
	@ pret/pokeemerald-jp direct xref for 0x08300834: trade.s: sub_08079C28
	.globl gTradeData_08300834
gTradeData_08300834: @ 0x08300834
	@ analyzed canonical ROM range 0x08300834-0x0830083B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0xEC, 0xFF, 0x2F, 0x08, 0x00, 0x08, 0x2C, 0x01
	@ pret/pokeemerald-jp direct xref for 0x0830083C: trade.s: sub_08079C28
	.globl gTradeData_0830083C
gTradeData_0830083C: @ 0x0830083C
	@ analyzed canonical ROM range 0x0830083C-0x0830088B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x50 entries=40
	.2byte 0xD12C, 0x082F, 0x0929, 0x0000, 0x0000, 0x0005, 0xFFFF, 0x0000
	.2byte 0x0008, 0x0005, 0xFFFF, 0x0000, 0x0010, 0x0005, 0xFFFF, 0x0000
	.2byte 0x0018, 0x0005, 0xFFFF, 0x0000, 0x0020, 0x0005, 0xFFFF, 0x0000
	.2byte 0x0028, 0x0005, 0xFFFF, 0x0000, 0x0844, 0x0830, 0x084C, 0x0830
	.2byte 0x0854, 0x0830, 0x085C, 0x0830, 0x0864, 0x0830, 0x086C, 0x0830
	@ pret/pokeemerald-jp direct xref for 0x0830088C: trade.s: sub_08076DD8, sub_08077558
	.globl gTradeData_0830088C
gTradeData_0830088C: @ 0x0830088C
	@ analyzed canonical ROM range 0x0830088C-0x083008A3
sSpriteTemplate_0830088C: @ 0x0830088C
	rodata_sprite_template 0x012C, 0x0929, 0x08300814, 0x0830082C, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x083008A4: trade.s: sub_08076DD8, sub_08077558
	.globl gTradeData_083008A4
gTradeData_083008A4: @ 0x083008A4
	@ analyzed canonical ROM range 0x083008A4-0x083008DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x38 bytes=56
	.byte 0xC8, 0x00, 0x3D, 0x13, 0x0C, 0x08, 0x30, 0x08, 0x74, 0x08, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x10, 0xF3, 0x2B, 0x08, 0x41, 0x71, 0x00, 0x08, 0x00, 0x00, 0x29, 0x25, 0x1F, 0x00, 0xE0, 0x03
	.byte 0x00, 0x7C, 0xFF, 0x03, 0xE0, 0x7F, 0x1F, 0x7C, 0x5A, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0x7F, 0x00, 0x00, 0xCE, 0x39, 0xFF, 0x7F
	@ pret/pokeemerald-jp direct xref for 0x083008DC: trade.s: sub_08079C28
	.globl gTradeData_083008DC
gTradeData_083008DC: @ 0x083008DC
	@ analyzed canonical ROM range 0x083008DC-0x083008E3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x08BC, 0x0830, 0x133D, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x083008E4: trade.s: sub_08078650
	.globl gTradeData_083008E4
gTradeData_083008E4: @ 0x083008E4
	@ analyzed canonical ROM range 0x083008E4-0x08300A1B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x138 entries=156
	.2byte 0x0204, 0x0C0C, 0x0000, 0x0402, 0x0C0C, 0x0000, 0x0607, 0x0001
	.2byte 0x0000, 0x0601, 0x0007, 0x0000, 0x0305, 0x0C0C, 0x0000, 0x0503
	.2byte 0x0C0C, 0x0000, 0x0700, 0x0106, 0x0000, 0x0706, 0x0100, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0004, 0x0000, 0x0000, 0x0809, 0x0607
	.2byte 0x0000, 0x0103, 0x0000, 0x0000, 0x0101, 0x0101, 0x0000, 0x0105
	.2byte 0x0101, 0x0000, 0x0902, 0x0708, 0x0000, 0x0908, 0x0606, 0x0000
	.2byte 0x0202, 0x0202, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A0B, 0x0809
	.2byte 0x0607, 0x0305, 0x0001, 0x0000, 0x0303, 0x0303, 0x0000, 0x0101
	.2byte 0x0101, 0x0000, 0x0404, 0x0404, 0x0000, 0x080A, 0x0006, 0x0000
	.2byte 0x080A, 0x000C, 0x0000, 0x0A08, 0x000C, 0x0000, 0x0001, 0x0000
	.2byte 0x0000, 0x0007, 0x0001, 0x0000, 0x000C, 0x0000, 0x0000, 0x0C09
	.2byte 0x0000, 0x0000, 0x0006, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0006, 0x0000, 0x0000, 0x060A, 0x0000, 0x0000, 0x0203, 0x0001
	.2byte 0x0000, 0x0709, 0x0000, 0x0000, 0x0007, 0x0000, 0x0000, 0x0C0B
	.2byte 0x0000, 0x0000, 0x0008, 0x0000, 0x0000, 0x0102, 0x0000, 0x0000
	.2byte 0x0008, 0x0000, 0x0000, 0x0006, 0x0000, 0x0000, 0x0405, 0x0203
	.2byte 0x0001, 0x090B, 0x0007, 0x0000, 0x0009, 0x0000, 0x0000, 0x000C
	.2byte 0x0000, 0x0000, 0x000A, 0x0000, 0x0000, 0x0204, 0x0000, 0x0000
	.2byte 0x090B, 0x0607, 0x0000, 0x0607, 0x0000, 0x0000, 0x000C, 0x0000
	.2byte 0x0000, 0x000C, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08300A1C: trade.s: TradeMenuMoveCursor, sub_08076DD8, sub_08077558, sub_080790C8, sub_080798E0
	.globl gTradeData_08300A1C
gTradeData_08300A1C: @ 0x08300A1C
	@ analyzed canonical ROM range 0x08300A1C-0x08300A35
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x1A entries=13
	.2byte 0x0501, 0x0508, 0x0A01, 0x0A08, 0x0F01, 0x0F08, 0x0510, 0x0517
	.2byte 0x0A10, 0x0A17, 0x0F10, 0x0F17, 0x1217
	@ pret/pokeemerald-jp direct xref for 0x08300A36: trade.s: sub_0807987C
	.globl gTradeData_08300A36
gTradeData_08300A36: @ 0x08300A36
	@ analyzed canonical ROM range 0x08300A36-0x08300A4D
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x18 entries=12
	.2byte 0x0405, 0x040C, 0x0905, 0x090C, 0x0E05, 0x0E0C, 0x0414, 0x041B
	.2byte 0x0914, 0x091B, 0x0E14, 0x0E1B
	@ pret/pokeemerald-jp direct xref for 0x08300A4E: trade.s: sub_0807987C
	.globl gTradeData_08300A4E
gTradeData_08300A4E: @ 0x08300A4E
	@ analyzed canonical ROM range 0x08300A4E-0x08300A89
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x3C entries=30
	.2byte 0x0301, 0x0308, 0x0801, 0x0808, 0x0D01, 0x0D08, 0x0310, 0x0317
	.2byte 0x0810, 0x0817, 0x0D10, 0x0D17, 0x0E00, 0x1D0F, 0x0503, 0x0703
	.2byte 0x0512, 0x0712, 0x0708, 0x0C16, 0x0708, 0x0C16, 0x0706, 0x0C18
	.2byte 0x0706, 0x0C18, 0x0708, 0x0C16, 0x0707, 0x0C17
	@ pret/pokeemerald-jp direct xref for 0x08300A8A: trade.s: sub_08079564
	.globl gTradeData_08300A8A
gTradeData_08300A8A: @ 0x08300A8A
	@ analyzed canonical ROM range 0x08300A8A-0x08300A94
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xB bytes=11
	.byte 0xFF, 0xFC, 0x01, 0x01, 0xFC, 0x02, 0x00, 0xFC, 0x03, 0x02, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x08300A95: daycare.s: AppendGenderSymbol
.elseif .L__inc_fragment_select_826ea214a185 == 2
	@ asm/trade.s:5088 sub_0807946C
	.globl gText_Rom_300AA0
gText_Rom_300AA0: @ 0x08300AA0
	.string "/{EOS}"
	.if (. - gText_Rom_300AA0) > 0x2
	.error "gText_Rom_300AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA0) < 0x2
	.space 0x2 - (. - gText_Rom_300AA0)
	.endif

	@ asm/trade.s:5098 sub_0807946C
	.globl gText_Rom_300AA2
gText_Rom_300AA2: @ 0x08300AA2
	.string "Lv{EOS}"
	.if (. - gText_Rom_300AA2) > 0x3
	.error "gText_Rom_300AA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA2) < 0x3
	.space 0x3 - (. - gText_Rom_300AA2)
	.endif
.elseif .L__inc_fragment_select_826ea214a185 == 3

	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_300AA5
gText_Rom_300AA5: @ 0x08300AA5
	.string "ーーー{EOS}"
	.if (. - gText_Rom_300AA5) > 0x4
	.error "gText_Rom_300AA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA5) < 0x4
	.space 0x4 - (. - gText_Rom_300AA5)
	.endif

	@ asm/trade.s:5229 sub_08079564
	.globl gText_Rom_300AA9
gText_Rom_300AA9: @ 0x08300AA9
	.string "？？？？{EOS}"
	.if (. - gText_Rom_300AA9) > 0x5
	.error "gText_Rom_300AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA9) < 0x5
	.space 0x5 - (. - gText_Rom_300AA9)
	.endif

	@ asm/trade.s:2612 sub_08078120
	.globl gText_Rom_300AAE
gText_Rom_300AAE: @ 0x08300AAE
	.string "と　{EOS}"
	.if (. - gText_Rom_300AAE) > 0x3
	.error "gText_Rom_300AAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AAE) < 0x3
	.space 0x3 - (. - gText_Rom_300AAE)
	.endif

	@ asm/trade.s:2618 sub_08078120
	.globl gText_Rom_300AB1
gText_Rom_300AB1: @ 0x08300AB1
	.string "を　こうかんしますか？{EOS}"
	.if (. - gText_Rom_300AB1) > 0xc
	.error "gText_Rom_300AB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AB1) < 0xc
	.space 0xc - (. - gText_Rom_300AB1)
	.endif
.elseif .L__inc_fragment_select_826ea214a185 == 4
	@ src/data/trade.h:49 sJPText_PressBButtonToQuit
	.globl sJPText_PressBButtonToQuit
sJPText_PressBButtonToQuit: @ 0x08300AEE
	.string "Bボタン で もどります{EOS}"
	.if (. - sJPText_PressBButtonToQuit) > 0xd
	.error "sJPText_PressBButtonToQuit may not grow beyond its original slot"
	.endif
	.if (. - sJPText_PressBButtonToQuit) < 0xd
	.space 0xd - (. - sJPText_PressBButtonToQuit)
	.endif
	.space 0x1, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08300AFC: trade.s: sub_08076DD8, sub_08077558, sub_080787A0, sub_08078900, sub_080799C0
	.globl gTradeData_08300AFC
gTradeData_08300AFC: @ 0x08300AFC
	@ confirmed contiguous ROM pointer table: 6 entries from this address
sPointerTable_08300AFC:
	@ analyzed canonical ROM range 0x08300AFC-0x08300B27
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0ABD, 0x0830, 0x0AC1, 0x0830, 0x0AD1, 0x0830, 0x0AD8, 0x0830
	.2byte 0x0AE0, 0x0830, 0x0AEE, 0x0830, 0x635D, 0x60AE, 0x2D5D, 0x2920
	.2byte 0x0AFF, 0x0603, 0x162E, 0x0D41, 0x00FF, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08300B28: trade.s: sub_080787A0
	.globl gTradeData_08300B28
gTradeData_08300B28: @ 0x08300B28
	@ confirmed contiguous ROM pointer table: 4 entries from this address
sPointerTable_08300B28:
	@ analyzed canonical ROM range 0x08300B28-0x08300B37
	@ pointer/nullable table
	.4byte gTradeData_08300AFC + 0x18 @ +0x0
	.4byte sub_08079A38 @ +0x4
	.4byte gTradeData_08300AFC + 0x21 @ +0x8
	.4byte sub_08079A5C @ +0xC
	.globl gText_Rom_300B38
gText_Rom_300B38: @ 0x08300B38
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}つうしんたいきちゅう！\nしばらくおまちください{EOS}"
	.if (. - gText_Rom_300B38) > 0x21
	.error "gText_Rom_300B38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B38) < 0x21
	.space 0x21 - (. - gText_Rom_300B38)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300B59
gText_Rom_300B59: @ 0x08300B59
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}こうかんは\nキャンセル　されました！{EOS}"
	.if (. - gText_Rom_300B59) > 0x1c
	.error "gText_Rom_300B59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B59) < 0x1c
	.space 0x1c - (. - gText_Rom_300B59)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_300B75
gText_Rom_300B75: @ 0x08300B75
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}そのポケモンを　こうかんすると\nせんとうできなくなっちゃうよ！{EOS}"
	.if (. - gText_Rom_300B75) != 0x29
	.error "gText_Rom_300B75 must retain its original byte length"
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300B9E
gText_Rom_300B9E: @ 0x08300B9E
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}ともだちの　しゅうりょうを\nまっています……{EOS}"
	.if (. - gText_Rom_300B9E) > 0x20
	.error "gText_Rom_300B9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B9E) < 0x20
	.space 0x20 - (. - gText_Rom_300B9E)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300BBE
gText_Rom_300BBE: @ 0x08300BBE
	.string "ともだちは　ポケモンの\nこうかんを　したいようです！{EOS}"
	.if (. - gText_Rom_300BBE) > 0x1b
	.error "gText_Rom_300BBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300BBE) < 0x1b
	.space 0x1b - (. - gText_Rom_300BBE)
	.endif
	.space 0x3, 0x00
.elseif .L__inc_fragment_select_826ea214a185 == 5
	.4byte gText_Rom_300B38
	.4byte gText_Rom_300B59
	.4byte gText_Rom_300B75
	.4byte gText_Rom_5CA294
	.4byte gText_Rom_300B9E
	.4byte gText_Rom_300BBE
	.4byte gText_Rom_5CA2B4
	.4byte gText_Rom_5CA2CC
	.4byte gText_Rom_5CA2E0
	@ Trade menu text printer colors: transparent, white, dark gray.
	@ The fourth byte is alignment padding and is intentionally preserved.
	.globl sTradeTextColors
sTradeTextColors: @ 0x08300C00
	@ ANALYSIS: SEMANTIC_TEXT_COLOR_TRIPLE addr=0x08300C00 size=0x4
	.byte 0, 1, 2
	.byte 0 @ alignment padding

	@ Four packed struct BgTemplate records consumed by InitBgsFromTemplates(..., 4).
	@ JP values differ from the English upstream layout; these are the exact JP records.
	.globl sTradeBgTemplates
sTradeBgTemplates: @ 0x08300C04
	@ ANALYSIS: SEMANTIC_BG_TEMPLATE_TABLE addr=0x08300C04 size=0x10 count=4
	.4byte 0x000001F8 @ [0] bg=0 charBase=2 mapBase=31 priority=0
	.4byte 0x00001051 @ [1] bg=1 charBase=0 mapBase=5  priority=1
	.4byte 0x00002062 @ [2] bg=2 charBase=0 mapBase=6  priority=2
	.4byte 0x00003073 @ [3] bg=3 charBase=0 mapBase=7  priority=3

	.macro trade_window_template bg, left, top, width, height, palette, base_block
	.byte \bg, \left, \top, \width, \height, \palette
	.2byte \base_block
	.endm

	@ Nineteen struct WindowTemplate records (18 windows + DUMMY_WIN_TEMPLATE).
	.globl sTradeWindowTemplates
sTradeWindowTemplates: @ 0x08300C14
	@ ANALYSIS: SEMANTIC_WINDOW_TEMPLATE_TABLE addr=0x08300C14 size=0x98 count=19
	trade_window_template 0, 7, 7, 16, 4, 15, 0x001E @ [0]
	trade_window_template 0, 19, 15, 10, 4, 15, 0x005E @ [1]
	trade_window_template 0, 1, 5, 6, 2, 13, 0x0086 @ [2]
	trade_window_template 0, 8, 5, 6, 2, 13, 0x0092 @ [3]
	trade_window_template 0, 1, 10, 6, 2, 13, 0x009E @ [4]
	trade_window_template 0, 8, 10, 6, 2, 13, 0x00AA @ [5]
	trade_window_template 0, 1, 15, 6, 2, 13, 0x00B6 @ [6]
	trade_window_template 0, 8, 15, 6, 2, 13, 0x00C2 @ [7]
	trade_window_template 0, 16, 5, 6, 2, 13, 0x00CE @ [8]
	trade_window_template 0, 23, 5, 6, 2, 13, 0x00DA @ [9]
	trade_window_template 0, 16, 10, 6, 2, 13, 0x00E6 @ [10]
	trade_window_template 0, 23, 10, 6, 2, 13, 0x00F2 @ [11]
	trade_window_template 0, 16, 15, 6, 2, 13, 0x00FE @ [12]
	trade_window_template 0, 23, 15, 6, 2, 13, 0x010A @ [13]
	trade_window_template 0, 2, 5, 12, 2, 13, 0x0116 @ [14]
	trade_window_template 0, 3, 8, 11, 8, 15, 0x012E @ [15]
	trade_window_template 0, 17, 5, 12, 2, 15, 0x0186 @ [16]
	trade_window_template 0, 18, 8, 11, 8, 15, 0x019E @ [17]
	trade_window_template 0xFF, 0, 0, 0, 0, 0, 0 @ [18] DUMMY_WIN_TEMPLATE

	@ WindowTemplate used by the delayed trade Yes/No menu.
	.globl sTradeYesNoWindowTemplate
sTradeYesNoWindowTemplate: @ 0x08300CAC
	@ ANALYSIS: SEMANTIC_WINDOW_TEMPLATE addr=0x08300CAC size=0x8
	trade_window_template 0, 23, 13, 5, 4, 15, 0x01F6
	.purgem trade_window_template
	@ Japanese trade debug/status text block. Bytes are kept explicit because the
	@ JP charmap contains zero-valued full-width spaces and this preserves exact ROM layout.
	.globl sTradeDebugText_KStart
sTradeDebugText_KStart: @ 0x08300CB4
	@ "K START"
	.byte 0xC5, 0x00, 0xCD, 0xCE, 0xBB, 0xCC, 0xCE, 0xFF

	.globl sTradeDebugText_SendAttempt
sTradeDebugText_SendAttempt: @ 0x08300CBC
	@ "かいめの そうしん"
	.byte 0x06, 0x02, 0x22, 0x19, 0x00, 0x0F, 0x03, 0x0C, 0x2E, 0xFF
	.byte 0x00, 0x00, 0x00 @ alignment/padding

	.globl sTradeDebugText_ReceiveAttempt
sTradeDebugText_ReceiveAttempt: @ 0x08300CC9
	@ "かいめの じゅしん"
	.byte 0x06, 0x02, 0x22, 0x19, 0x00, 0x3D, 0x35, 0x0C, 0x2E, 0xFF
	.byte 0x00, 0x00, 0x00 @ alignment/padding

	.globl sTradeDebugText_SetPokemonIcon
sTradeDebugText_SetPokemonIcon: @ 0x08300CD6
	@ "ポケモンアイコンセット"
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x51, 0x52, 0x5A, 0x7E, 0x5E, 0xA0, 0x64, 0xFF
	.byte 0x00 @ alignment/padding

	.globl sTradeDebugText_SetObjText
sTradeDebugText_SetObjText: @ 0x08300CE3
	@ "OBJテキストセット"
	.byte 0xC9, 0xBC, 0xC4, 0x63, 0x57, 0x5D, 0x64, 0x5E, 0xA0, 0x64, 0xFF
	.byte 0x00, 0x00 @ alignment/padding

	.globl sTradeDebugText_SetCell
sTradeDebugText_SetCell: @ 0x08300CF0
	@ "セルセット"
	.byte 0x5E, 0x79, 0x5E, 0xA0, 0x64, 0xFF
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ padding

	.globl sTradeDebugText_AddObjText
sTradeDebugText_AddObjText: @ 0x08300CFD
	@ "OBJテキストADD"
	.byte 0xC9, 0xBC, 0xC4, 0x63, 0x57, 0x5D, 0x64, 0xBB, 0xBE, 0xBE, 0xFF
	.byte 0x00, 0x00 @ alignment/padding

	.globl sTradeDebugText_AddSystemMessage
sTradeDebugText_AddSystemMessage: @ 0x08300D0A
	@ "システムメッセージADD"
	.byte 0x5C, 0x5D, 0x63, 0x71, 0x72, 0xA0, 0x5E, 0xAE, 0x8D, 0xBB, 0xBE, 0xBE, 0xFF

	.globl sTradeDebugText_SetBackground
sTradeDebugText_SetBackground: @ 0x08300D17
	@ "はいけいセット"
	.byte 0x1A, 0x02, 0x09, 0x02, 0x5E, 0xA0, 0x64, 0xFF
	.byte 0x00, 0x00, 0x00, 0x00, 0x00 @ padding

	.globl sTradeDebugText_TradeEstablished
sTradeDebugText_TradeEstablished: @ 0x08300D24
	@ "こうかんせいりつ     "
	.byte 0x0A, 0x03, 0x06, 0x2E, 0x0E, 0x02, 0x28, 0x12
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF

	.globl sTradeDebugText_TradeFailed
sTradeDebugText_TradeFailed: @ 0x08300D32
	@ "だめだったらしいよ     "
	.byte 0x41, 0x22, 0x41, 0x10, 0x27, 0x0C, 0x02, 0x26
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF

	@ Trade selected-mon level/gender coordinates used by sub_080790C8.
	.globl sSelectedMonLevelGenderCoords_JP
sSelectedMonLevelGenderCoords_JP: @ 0x08300D40
	@ ANALYSIS: SEMANTIC_U8_PAIR_TABLE addr=0x08300D40 size=0x4 count=2
	.byte 4, 3
	.byte 19, 3

	@ Editable Poké Ball palette.
	.globl sPokeball_Pal
sPokeball_Pal: @ 0x08300D44
	@ ANALYSIS: EDITABLE_PALETTE addr=0x08300D44 size=0x20
	.incbin "build/graphics/trade/pokeball_palette.gbapal"

	@ Editable Poké Ball sprite graphics.
	.globl sPokeball_Gfx
sPokeball_Gfx: @ 0x08300D64
	@ ANALYSIS: EDITABLE_4BPP addr=0x08300D64 size=0x600 tiles=48
	.incbin "build/graphics/trade/pokeball.4bpp"

	@ Canonical unused Poké Ball symbol graphics; exact JP 8bpp asset.
	.globl sPokeballSymbol_Gfx
sPokeballSymbol_Gfx: @ 0x08301364
	@ ANALYSIS: EDITABLE_8BPP addr=0x08301364 size=0x1A00 tiles=104
	.incbin "build/graphics/trade/pokeball_symbol.8bpp"

	@ Cable trade crossing-highlight tilemap; directly copied by trade animation code.
	.globl sCableCloseup_Map
sCableCloseup_Map: @ 0x08302D64
	@ ANALYSIS: EDITABLE_TILEMAP_U16 addr=0x08302D64 size=0x800
	.incbin "graphics/trade/cable_closeup.tilemap.u16"

	@ Canonical unused Poké Ball symbol tilemap.
	.globl sPokeballSymbol_Map
sPokeballSymbol_Map: @ 0x08303564
	@ ANALYSIS: EDITABLE_TILEMAP_U16 addr=0x08303564 size=0x100
	.incbin "graphics/trade/pokeball_symbol.tilemap.u16"

	@ Canonical unused trade palette 1.
	.globl sUnusedPal1
sUnusedPal1: @ 0x08303664
	@ ANALYSIS: EDITABLE_PALETTE addr=0x08303664 size=0x20
	.incbin "build/graphics/trade/unused1_palette.gbapal"

	@ Editable GBA sprite palette.
	.globl sGba_Pal
sGba_Pal: @ 0x08303684
	@ ANALYSIS: EDITABLE_PALETTE addr=0x08303684 size=0x20
	.incbin "build/graphics/trade/gba_palette.gbapal"

	@ Canonical unused trade palette 2.
	.globl sUnusedPal2
sUnusedPal2: @ 0x083036A4
	@ ANALYSIS: EDITABLE_PALETTE addr=0x083036A4 size=0x20
	.incbin "build/graphics/trade/unused2_palette.gbapal"

	@ Canonical unused no-signal wireless palette; all colors are zero in JP.
	.globl sWirelessSignalNone_Pal_Unused
sWirelessSignalNone_Pal_Unused: @ 0x083036C4
	@ ANALYSIS: EDITABLE_PALETTE addr=0x083036C4 size=0x20
	.incbin "build/graphics/trade/wireless_signal_none_palette.gbapal"

	@ Editable link-mon palette shared by glow and shadow graphics.
	.globl sLinkMon_Pal
sLinkMon_Pal: @ 0x083036E4
	@ ANALYSIS: EDITABLE_PALETTE addr=0x083036E4 size=0x20
	.incbin "build/graphics/trade/link_mon_palette.gbapal"

	.globl sLinkMonGlow_Gfx
sLinkMonGlow_Gfx: @ 0x08303704
	@ ANALYSIS: EDITABLE_4BPP addr=0x08303704 size=0x200 tiles=16
	.incbin "build/graphics/trade/link_mon_glow.4bpp"

	.globl sLinkMonShadow_Gfx
sLinkMonShadow_Gfx: @ 0x08303904
	@ ANALYSIS: EDITABLE_4BPP addr=0x08303904 size=0x300 tiles=24
	.incbin "build/graphics/trade/link_mon_shadow.4bpp"

	@ Canonical cable-end graphics. JP data is an all-zero 16x32 4bpp image.
	.globl sCableEnd_Gfx
sCableEnd_Gfx: @ 0x08303C04
	@ ANALYSIS: EDITABLE_4BPP addr=0x08303C04 size=0x100 tiles=8
	.incbin "build/graphics/trade/cable_end.4bpp"

	.globl sGbaScreen_Gfx
sGbaScreen_Gfx: @ 0x08303D04
	@ ANALYSIS: EDITABLE_4BPP addr=0x08303D04 size=0x1000 tiles=128
	.incbin "build/graphics/trade/gba_screen.4bpp"
	@ Trade platform background tilemap, shared by trade and egg-hatch consumers.
	.globl gTradePlatform_Tilemap
gTradePlatform_Tilemap: @ 0x08304D04
	@ ANALYSIS: EDITABLE_TILEMAP_U16 addr=0x08304D04 size=0x1000
	.incbin "graphics/trade/platform.tilemap.u16"
	@ JP-only duplicate copy of sGba_Pal. v93 proved exact byte equality at
	@ 0x08303684, 0x08305D04, and 0x08305D44. No direct owner was found.
	.globl sGbaPaletteDuplicate_JP
sGbaPaletteDuplicate_JP: @ 0x08305D04
	@ ANALYSIS: SEMANTIC_DUPLICATE_PALETTE addr=0x08305D04 size=0x20
	.incbin "build/graphics/trade/gba_palette.gbapal"
	@ Trade GBA background palette source. The trade scene loads the first 0x60
	@ bytes (3 banks). Egg hatch loads 0xA0 bytes from this same start, so in JP
	@ that read intentionally continues 0x40 bytes into the following GBA gfx.
	.globl gTradeGba2_Pal
gTradeGba2_Pal: @ 0x08305D24
	@ ANALYSIS: EDITABLE_PALETTE_BANKS addr=0x08305D24 emitted_size=0x60 banks=3
	.incbin "build/graphics/trade/gba2_palette_bank0.gbapal"
	.incbin "build/graphics/trade/gba2_palette_bank1.gbapal"
	.incbin "build/graphics/trade/gba2_palette_bank2.gbapal"
	@ Uncompressed trade/egg-hatch GBA background graphics.
	@ Trade consumes the full 0x1420 bytes; egg hatch consumes the first 0x1300.
	.globl gTradeGba_Gfx
gTradeGba_Gfx: @ 0x08305D84
	@ ANALYSIS: EDITABLE_4BPP addr=0x08305D84 size=0x1420 tiles=161
	.incbin "build/graphics/trade/gba_bg.4bpp"
	@ 8bpp affine GBA graphics copied to VRAM by the trade close-up sequence.
	.globl sGbaAffine_Gfx
sGbaAffine_Gfx: @ 0x083071A4
	@ ANALYSIS: EDITABLE_8BPP addr=0x083071A4 size=0x2800 tiles=160
	.incbin "build/graphics/trade/gba_affine.8bpp"

	@ Canonical 64-byte empty graphics pad following the affine graphics.
	.globl sEmptyGfx
sEmptyGfx: @ 0x083099A4
	@ ANALYSIS: SEMANTIC_ZERO_GFX addr=0x083099A4 size=0x40
	.fill 0x40, 1, 0
	@ 8-bit affine map used for the cable trade close-up.
	.globl sGbaAffineMapCable
sGbaAffineMapCable: @ 0x083099E4
	@ ANALYSIS: EDITABLE_AFFINE_TILEMAP_U8 addr=0x083099E4 size=0x100
	.incbin "graphics/trade/gba_affine_map_cable.tilemap.u8"
	@ 8-bit affine map used for the wireless trade close-up.
	.globl sGbaAffineMapWireless
sGbaAffineMapWireless: @ 0x08309AE4
	@ ANALYSIS: EDITABLE_AFFINE_TILEMAP_U8 addr=0x08309AE4 size=0x100
	.incbin "graphics/trade/gba_affine_map_wireless.tilemap.u8"
.elseif .L__inc_fragment_select_826ea214a185 == 6
	@ pret/pokeemerald-jp direct xref for 0x08309BE4: trade.s: sub_0807B064
	.globl sGbaMapWireless
sGbaMapWireless: @ 0x08309BE4
	@ 64x32 regular BG tilemap, 2048 u16 entries.
	.incbin "graphics/trade/gba_map_wireless.tilemap.u16"
	.if (. - sGbaMapWireless) != 0x1000
	.error "sGbaMapWireless size mismatch"
	.endif

	.globl sGbaMapCable
sGbaMapCable: @ 0x0830ABE4
	@ 64x32 regular BG tilemap, 2048 u16 entries.
	.incbin "graphics/trade/gba_map_cable.tilemap.u16"
	.if (. - sGbaMapCable) != 0x1000
	.error "sGbaMapCable size mismatch"
	.endif

	.globl sWirelessCloseup_Map
sWirelessCloseup_Map: @ 0x0830BBE4
	@ Semantic exact-LZ Trade wireless asset.
	.incbin "build/graphics/trade_jp_wireless/crossing_highlight_wireless.bin.lz"
	.if (. - sWirelessCloseup_Map) != 0x100
	.error "sWirelessCloseup_Map compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0830BCE4: trade.s: c3_08054588
	.globl sWirelessSignalSend_Pal
sWirelessSignalSend_Pal: @ 0x0830BCE4
	@ 16 animation frames x 16 BGR555 colors.
	@ Editable source: 16 rows; one palette frame per row.
	.incbin "build/graphics/semantic_palettes/trade/wireless_signal_send.gbapal"
	.if (. - sWirelessSignalSend_Pal) != 0x200
	.error "sWirelessSignalSend_Pal size mismatch"
	.endif
	.globl sWirelessSignalRecv_Pal
sWirelessSignalRecv_Pal: @ 0x0830BEE4
	@ 16 animation frames x 16 BGR555 colors.
	@ Editable source: 16 rows; one palette frame per row.
	.incbin "build/graphics/semantic_palettes/trade/wireless_signal_recv.gbapal"
	.if (. - sWirelessSignalRecv_Pal) != 0x200
	.error "sWirelessSignalRecv_Pal size mismatch"
	.endif
	.globl sWirelessSignalNone_Pal
sWirelessSignalNone_Pal: @ 0x0830C0E4
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Static no-signal palette loaded before the wireless animation.
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/trade/sWirelessSignalNone_Pal.gbapal"

	.globl sWirelessSignal_Gfx
sWirelessSignal_Gfx: @ 0x0830C104
	@ Semantic exact-LZ Trade wireless asset.
	.incbin "build/graphics/trade_jp_wireless/wireless_signal.4bpp.lz"
	.if (. - sWirelessSignal_Gfx) != 0x690
	.error "sWirelessSignal_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0830C794: trade.s: sub_0807B064
.globl sWirelessSignal_Tilemap
sWirelessSignal_Tilemap: @ 0x0830C794
	@ confirmed GBA LZ77 stream: compressed=0x6F2, decompressed=0x800
	@ analyzed canonical ROM range 0x0830C794-0x0830CF5B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/trade/wireless_signal_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00
	.byte 0x03, 0x00, 0x08, 0x00, 0x03, 0x00, 0x0C, 0x00, 0x03, 0x00, 0x10, 0x00, 0x03, 0x00, 0x14, 0x00
	.byte 0x03, 0x00, 0x18, 0x00, 0x03, 0x00, 0x1C, 0x00, 0x03, 0x00, 0x20, 0x00, 0x03, 0x00, 0x24, 0x00
	.byte 0x03, 0x00, 0x28, 0x00, 0x03, 0x00, 0x2C, 0x00, 0x03, 0x00, 0xFD, 0xFF, 0x01, 0x00, 0x00, 0x00
	.byte 0x03, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x03, 0x00, 0x08, 0x00
	.byte 0x03, 0x00, 0x0C, 0x00, 0x03, 0x00, 0x10, 0x00, 0x03, 0x00, 0x14, 0x00, 0x03, 0x00, 0x18, 0x00
	.byte 0x03, 0x00, 0x1C, 0x00, 0x03, 0x00, 0x20, 0x00, 0x03, 0x00, 0x24, 0x00, 0x03, 0x00, 0x28, 0x00
	.byte 0x03, 0x00, 0x2C, 0x00, 0x03, 0x00, 0xFD, 0xFF, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0xFF, 0xFF
	.byte 0x00, 0x00, 0x90, 0xCE, 0x30, 0x08, 0xCC, 0xCE, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x00, 0x00, 0x00, 0x14
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x14
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xCF, 0x30, 0x08, 0x20, 0xCF
	.byte 0x30, 0x08, 0x30, 0xCF, 0x30, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0830CF5C: trade.s: sub_0807A8AC, sub_0807ACC8
	.globl sPokeBallSpriteSheet
sPokeBallSpriteSheet: @ 0x0830CF5C
	.4byte sPokeball_Gfx
	.2byte 0x0600 @ size
	.2byte 0x15B5 @ GFX tag

	.globl sPokeBallSpritePalette
sPokeBallSpritePalette: @ 0x0830CF64
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.4byte sPokeball_Pal
	.2byte 0x15B6 @ palette tag
	.2byte 0x0000 @ padding

	.globl sSpriteTemplate_Pokeball
sSpriteTemplate_Pokeball: @ 0x0830CF6C
	@ OAM/anims/affine data live in the still-opaque preceding Trade residual;
	@ exact JP pointers are intentionally retained for those three fields.
	rodata_sprite_template 0x15B5, 0x15B6, 0x0830CE88, 0x0830CF08, 0, 0x0830CF50, sub_0807DF94

	.globl sOamData_LinkMonGlow
sOamData_LinkMonGlow: @ 0x0830CF84
	.2byte 0x0500, 0x8000, 0x0400, 0x0000

	.globl sAnim_LinkMonGlow
sAnim_LinkMonGlow: @ 0x0830CF8C
	.2byte 0x0000, 0x00C5, 0xFFFF, 0x0000

	.globl sAnims_LinkMonGlow
sAnims_LinkMonGlow: @ 0x0830CF94
	.4byte sAnim_LinkMonGlow

	.globl sAffineAnim_LinkMonGlow
sAffineAnim_LinkMonGlow: @ 0x0830CF98
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0xFFF6, 0xFFF6, 0x0500, 0x0000, 0x000A, 0x000A, 0x0500, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl sAffineAnims_LinkMonGlow
sAffineAnims_LinkMonGlow: @ 0x0830CFB0
	.4byte sAffineAnim_LinkMonGlow

	.globl sSpriteSheet_LinkMonGlow
sSpriteSheet_LinkMonGlow: @ 0x0830CFB4
	.4byte sLinkMonGlow_Gfx
	.2byte 0x0200 @ size
	.2byte 0x15AE @ GFX tag

	.globl sSpritePalette_LinkMon
sSpritePalette_LinkMon: @ 0x0830CFBC
	.4byte sLinkMon_Pal
	.2byte 0x15AF @ palette tag
	.2byte 0x0000 @ padding

	.globl sSpritePalette_Gba
sSpritePalette_Gba: @ 0x0830CFC4
	.4byte sGba_Pal
	.2byte 0x15B3 @ palette tag
	.2byte 0x0000 @ padding

	.globl sSpriteTemplate_LinkMonGlow
sSpriteTemplate_LinkMonGlow: @ 0x0830CFCC
	rodata_sprite_template 0x15AE, 0x15AF, sOamData_LinkMonGlow, sAnims_LinkMonGlow, 0, sAffineAnims_LinkMonGlow, sub_0807A498

	.globl sOamData_LinkMonShadow
sOamData_LinkMonShadow: @ 0x0830CFE4
	.2byte 0x8000, 0x8000, 0x0400, 0x0000

	.globl sAnim_LinkMonShadow_Big
sAnim_LinkMonShadow_Big: @ 0x0830CFEC
	.2byte 0x0000, 0x00C5, 0xFFFF, 0x0000

	.globl sAnim_LinkMonShadow_Small
sAnim_LinkMonShadow_Small: @ 0x0830CFF4
	.2byte 0x0008, 0x00C5, 0xFFFF, 0x0000

	.globl sAnims_LinkMonShadow
sAnims_LinkMonShadow: @ 0x0830CFFC
	.4byte sAnim_LinkMonShadow_Big
	.4byte sAnim_LinkMonShadow_Small

	.globl sSpriteSheet_LinkMonShadow
sSpriteSheet_LinkMonShadow: @ 0x0830D004
	.4byte sLinkMonShadow_Gfx
	.2byte 0x0300 @ size
	.2byte 0x15B0 @ GFX tag

	.globl sSpriteTemplate_LinkMonShadow
sSpriteTemplate_LinkMonShadow: @ 0x0830D00C
	rodata_sprite_template 0x15B0, 0x15AF, sOamData_LinkMonShadow, sAnims_LinkMonShadow, 0, gDummySpriteAffineAnimTable, sub_0807A4EC

	.globl sOamData_CableEnd
sOamData_CableEnd: @ 0x0830D024
	.2byte 0x8000, 0x8000, 0x0400, 0x0000

	.globl sAnim_CableEnd
sAnim_CableEnd: @ 0x0830D02C
	.2byte 0x0000, 0x000A, 0xFFFF, 0x0000

	.globl sAnims_CableEnd
sAnims_CableEnd: @ 0x0830D034
	.4byte sAnim_CableEnd

	.globl sSpriteSheet_CableEnd
sSpriteSheet_CableEnd: @ 0x0830D038
	.4byte sLinkMonShadow_Gfx + 0x200 @ exact JP cable-end sheet data pointer
	.2byte 0x0100 @ size
	.2byte 0x15B2 @ GFX tag

	.globl sSpriteTemplate_CableEnd
sSpriteTemplate_CableEnd: @ 0x0830D040
	rodata_sprite_template 0x15B2, 0x15B3, sOamData_CableEnd, sAnims_CableEnd, 0, gDummySpriteAffineAnimTable, sub_0807A52C

	.globl sOamData_GbaScreen
sOamData_GbaScreen: @ 0x0830D058
	.2byte 0x4000, 0xC000, 0x0400, 0x0000

	.globl sAnim_GbaScreen_Long
sAnim_GbaScreen_Long: @ 0x0830D060
	.2byte 0x0000, 0x00C2, 0x0020, 0x00C2, 0x0040, 0x00C2, 0x0060, 0x00C2
	.2byte 0x0040, 0x00C2, 0x0020, 0x00C2, 0x0000, 0x00C2, 0xFFFD, 0x0008
	.2byte 0xFFFF, 0x0000

	.globl sAnim_GbaScreen_Short
sAnim_GbaScreen_Short: @ 0x0830D084
	.2byte 0x0000, 0x00C2, 0x0020, 0x00C2, 0x0040, 0x00C2, 0x0060, 0x00C2
	.2byte 0x0040, 0x00C2, 0x0020, 0x00C2, 0x0000, 0x00C2, 0xFFFD, 0x0002
	.2byte 0xFFFF, 0x0000

	.globl sAnims_GbaScreen_Long
sAnims_GbaScreen_Long: @ 0x0830D0A8
	.4byte sAnim_GbaScreen_Long

	.globl sAnims_GbaScreen_Short
sAnims_GbaScreen_Short: @ 0x0830D0AC
	.4byte sAnim_GbaScreen_Short

	.globl sSpriteSheet_GbaScreen
sSpriteSheet_GbaScreen: @ 0x0830D0B0
	.4byte sGbaScreen_Gfx
	.2byte 0x1000 @ size
	.2byte 0x15B4 @ GFX tag

	.globl sSpriteTemplate_GbaScreenFlash_Long
sSpriteTemplate_GbaScreenFlash_Long: @ 0x0830D0B8
	@ Canonical trade GBA-screen flash sprite template using sAnims_GbaScreen_Long.
	rodata_sprite_template 0x15B4, 0x15B3, sOamData_GbaScreen, sAnims_GbaScreen_Long, 0, gDummySpriteAffineAnimTable, sub_0807A574
	@ pret/pokeemerald-jp direct xref for 0x0830D0D0: trade.s: sub_0807CA00
	.globl sSpriteTemplate_GbaScreenFlash_Short
sSpriteTemplate_GbaScreenFlash_Short: @ 0x0830D0D0
	@ Canonical trade GBA-screen flash sprite template using sAnims_GbaScreen_Short.
	rodata_sprite_template 0x15B4, 0x15B3, sOamData_GbaScreen, sAnims_GbaScreen_Short, 0, gDummySpriteAffineAnimTable, sub_0807A574
	@ pret/pokeemerald-jp direct xref for 0x0830D0E8: trade.s: sub_0807A4EC
	.globl sLinkMonShadow_Pal
sLinkMonShadow_Pal: @ 0x0830D0E8
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ 12 palette colors stepped one at a time by sub_0807A4EC.
	.2byte 0x7F12, 0x7F12, 0x7F12, 0x7FFF, 0x7FFF, 0x7FFF, 0x7F12, 0x7F12
	.2byte 0x7F12, 0x7FFF, 0x7FFF, 0x7FFF

	.globl sAffineAnim_CrossingMonPic
sAffineAnim_CrossingMonPic: @ 0x0830D100
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0xFF00, 0x0100, 0x0000, 0x0000, 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl sAffineAnims_CrossingMonPics
sAffineAnims_CrossingMonPics: @ 0x0830D110
	.4byte sAffineAnim_CrossingMonPic

	.globl sIngameTrades
sIngameTrades: @ 0x0830D114
	@ ANALYSIS: SEMANTIC_NUMERIC_INGAME_TRADE_TABLE
	@ Four JP InGameTrade records, stride 0x3C.
	@ trade 0
	@ JP InGameTrade semantic helpers.
	@ The JP ROM stores both nickname and OT name in 11-byte buffers.
	.set JP_TRADE_ABILITY_SLOT_1, 0
	.set JP_TRADE_ABILITY_SLOT_2, 1
	.set JP_TRADE_OT_GENDER_MALE, 0
	.set JP_TRADE_OT_GENDER_FEMALE, 1
	.set JP_TRADE_MAIL_NONE, 0xFF
	.set JP_TRADE_SPECIES_0034, 0x0034
	.set JP_TRADE_SPECIES_0074, 0x0074
	.set JP_TRADE_SPECIES_012A, 0x012A
	.set JP_TRADE_SPECIES_013B, 0x013B
	.set JP_TRADE_SPECIES_0161, 0x0161
	.set JP_TRADE_SPECIES_0182, 0x0182
	.set JP_TRADE_SPECIES_0188, 0x0188
	.set JP_TRADE_SPECIES_018B, 0x018B
	.set JP_TRADE_ITEM_007D, 0x007D
	.set JP_TRADE_ITEM_007E, 0x007E
	.set JP_TRADE_ITEM_0084, 0x0084
	.set JP_TRADE_ITEM_0086, 0x0086

	.macro jp_trade_ivs hp, attack, defense, speed, sp_attack, sp_defense
		.byte \hp, \attack, \defense, \speed, \sp_attack, \sp_defense
	.endm

	.macro jp_trade_conditions cool, beauty, cute, smart, tough
		.byte \cool, \beauty, \cute, \smart, \tough
	.endm

	@ trade 0 / JP struct InGameTrade (0x3C bytes)
	.byte 0x5E, 0x98, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ nickname[11], JP encoded
	.byte 0 @ align species
	.2byte JP_TRADE_SPECIES_012A @ species
	jp_trade_ivs 5, 4, 5, 4, 4, 4
	.byte JP_TRADE_ABILITY_SLOT_2 @ abilityNum
	.byte 0, 0, 0 @ align otId
	.4byte 0x00009746 @ otId
	jp_trade_conditions 30, 5, 5, 5, 5
	.byte 0, 0, 0 @ align personality
	.4byte 0x00000084 @ personality
	.2byte JP_TRADE_ITEM_0086 @ heldItem
	.byte JP_TRADE_MAIL_NONE @ mailNum
	.byte 0x6F, 0xA0, 0x61, 0x84, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00 @ JP OT name storage[11]
	.byte JP_TRADE_OT_GENDER_MALE @ otGender
	.byte 10 @ sheen
	.2byte JP_TRADE_SPECIES_0188 @ requestedSpecies
	.byte 0, 0 @ struct trailing alignment

	@ trade 1 / JP struct InGameTrade (0x3C bytes)
	.byte 0x9D, 0x77, 0x9D, 0x77, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ nickname[11], JP encoded
	.byte 0 @ align species
	.2byte JP_TRADE_SPECIES_0161 @ species
	jp_trade_ivs 4, 4, 4, 5, 5, 4
	.byte JP_TRADE_ABILITY_SLOT_1 @ abilityNum
	.byte 0, 0, 0 @ align otId
	.4byte 0x0001210C @ otId
	jp_trade_conditions 5, 5, 30, 5, 5
	.byte 0, 0, 0 @ align personality
	.4byte 0x0000006F @ personality
	.2byte JP_TRADE_ITEM_007D @ heldItem
	.byte 0 @ mailNum
	.byte 0x51, 0xA0, 0x57, 0xAE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ JP OT name storage[11]
	.byte JP_TRADE_OT_GENDER_MALE @ otGender
	.byte 10 @ sheen
	.2byte JP_TRADE_SPECIES_0182 @ requestedSpecies
	.byte 0, 0 @ struct trailing alignment

	@ trade 2 / JP struct InGameTrade (0x3C bytes)
	.byte 0x8B, 0x7B, 0xAE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ nickname[11], JP encoded
	.byte 0 @ align species
	.2byte JP_TRADE_SPECIES_0074 @ species
	jp_trade_ivs 5, 4, 4, 4, 5, 4
	.byte JP_TRADE_ABILITY_SLOT_1 @ abilityNum
	.byte 0, 0, 0 @ align otId
	.4byte 0x0000B4CD @ otId
	jp_trade_conditions 5, 5, 5, 5, 30
	.byte 0, 0, 0 @ align personality
	.4byte 0x0000007F @ personality
	.2byte JP_TRADE_ITEM_007E @ heldItem
	.byte 1 @ mailNum
	.byte 0x5F, 0x87, 0x61, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ JP OT name storage[11]
	.byte JP_TRADE_OT_GENDER_MALE @ otGender
	.byte 10 @ sheen
	.2byte JP_TRADE_SPECIES_018B @ requestedSpecies
	.byte 0, 0 @ struct trailing alignment

	@ trade 3 / JP struct InGameTrade (0x3C bytes)
	.byte 0x61, 0xAE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ nickname[11], JP encoded
	.byte 0 @ align species
	.2byte JP_TRADE_SPECIES_0034 @ species
	jp_trade_ivs 4, 5, 4, 5, 4, 4
	.byte JP_TRADE_ABILITY_SLOT_1 @ abilityNum
	.byte 0, 0, 0 @ align otId
	.4byte 0x00016559 @ otId
	jp_trade_conditions 5, 5, 5, 30, 5
	.byte 0, 0, 0 @ align personality
	.4byte 0x0000008B @ personality
	.2byte JP_TRADE_ITEM_0084 @ heldItem
	.byte 2 @ mailNum
	.byte 0x6F, 0x78, 0xA0, 0x9E, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ JP OT name storage[11]
	.byte JP_TRADE_OT_GENDER_FEMALE @ otGender
	.byte 10 @ sheen
	.2byte JP_TRADE_SPECIES_013B @ requestedSpecies
	.byte 0, 0 @ struct trailing alignment


	.globl sIngameTradeMail
sIngameTradeMail: @ 0x0830D204
	@ Three mail Easy Chat records, 10 u16 words (0x14 bytes) each.
	@ mail 0
	.2byte 0x0161, 0x0829, 0x1033, 0x0182, 0x1034, 0x270E, 0x140C, 0x1239, 0x081A, 0x0000
	@ mail 1
	.2byte 0x018B, 0x1619, 0x1042, 0x2A74, 0x0E29, 0x180F, 0x140C, 0x1621, 0x1032, 0x0000
	@ mail 2
	.2byte 0x013B, 0x0800, 0x0C01, 0x2A34, 0x1034, 0x262D, 0x1421, 0x0418, 0x103E, 0x0000

	.globl gText_Rom_30D240
.elseif .L__inc_fragment_select_826ea214a185 == 7
	@ asm/trade.s:9631 sub_0807B624
	.globl gText_Rom_30D240
gText_Rom_30D240: @ 0x0830D240
	.string "{0xFD}{0x02}に\n{0xFD}{0x03}を　おくります！{EOS}"
	.if (. - gText_Rom_30D240) > 0xf
	.error "gText_Rom_30D240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D240) < 0xf
	.space 0xf - (. - gText_Rom_30D240)
	.endif

	@ asm/trade.s:9700 sub_0807B624
	.globl gText_Rom_30D24F
gText_Rom_30D24F: @ 0x0830D24F
	.string "ばいばい　{0xFD}{0x03}！{EOS}"
	.if (. - gText_Rom_30D24F) > 0x9
	.error "gText_Rom_30D24F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D24F) < 0x9
	.space 0x9 - (. - gText_Rom_30D24F)
	.endif

	@ asm/trade.s:11177 sub_0807B624
	.globl gText_Rom_30D258
gText_Rom_30D258: @ 0x0830D258
	.string "{0xFD}{0x02}から\n{0xFD}{0x04}が　おくられてきた！{EOS}"
	.if (. - gText_Rom_30D258) > 0x12
	.error "gText_Rom_30D258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D258) < 0x12
	.space 0x12 - (. - gText_Rom_30D258)
	.endif

	@ asm/trade.s:11253 sub_0807B624
	.globl gText_Rom_30D26A
gText_Rom_30D26A: @ 0x0830D26A
	.string "{0xFD}{0x04}を　かわいがって　あげてね！{EOS}"
	.if (. - gText_Rom_30D26A) > 0x11
	.error "gText_Rom_30D26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D26A) < 0x11
	.space 0x11 - (. - gText_Rom_30D26A)
	.endif
	.space 0x1, 0x00
.elseif .L__inc_fragment_select_826ea214a185 == 8
@ Semanticized trade/evolution/Berry Blender rodata.
@ ROM addresses are verification comments only.

	.globl gTradeWindowTemplates
gTradeWindowTemplates: @ 0x0830D27C
	@ struct WindowTemplate[2]: trade message window + dummy terminator.
	.byte 0, 2, 15, 26, 4, 0
	.2byte 0x0040 @ entry 0
	.byte 255, 0, 0, 0, 0, 0
	.2byte 0x0000 @ entry 1

.elseif .L__inc_fragment_select_826ea214a185 == 9

	@ asm/trade.s:5988 sub_08079BD4 (+1 aliases)
	.globl gText_Rom_5CA294
gText_Rom_5CA294: @ 0x085CA294
	.string "そのポケモンを　こうかんすると\nせんとうできなくなっちゃうよ！{EOS}"
	.if (. - gText_Rom_5CA294) > 0x20
	.error "gText_Rom_5CA294 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA294) < 0x20
	.space 0x20 - (. - gText_Rom_5CA294)
	.endif

	@ asm/trade.s:5988 sub_08079BD4 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2B4
gText_Rom_5CA2B4: @ 0x085CA2B4
	.string "その　ポケモンは　いま\nこうかんに　だせません{EOS}"
	.if (. - gText_Rom_5CA2B4) != 0x18
	.error "gText_Rom_5CA2B4 must retain its original byte length"
	.endif

	@ asm/trade.s:5988 sub_08079BD4 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2CC
gText_Rom_5CA2CC: @ 0x085CA2CC
	.string "タマゴは　いま\nこうかんに　だせません{EOS}"
	.if (. - gText_Rom_5CA2CC) != 0x14
	.error "gText_Rom_5CA2CC must retain its original byte length"
	.endif

	@ asm/trade.s:5988 sub_08079BD4 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2E0
gText_Rom_5CA2E0: @ 0x085CA2E0
	.string "あいての　ポケモンとは\nいまは　こうかん　できません{EOS}"
	.if (. - gText_Rom_5CA2E0) != 0x1b
	.error "gText_Rom_5CA2E0 must retain its original byte length"
	.endif
.endif
