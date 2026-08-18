	@ pret/pokeemerald-jp direct xref for 0x0857CD6C: pokedex_area_screen.s: CreateAreaMarkerSprites; region_map.s: GetMapName, RegionMap_InitializeStateBasedOnPlayerLocation, RegionMap_InitializeStateBasedOnSSTidalLocation, sub_0812463C
.macro region_map_location_entry x, y, width, height, name
	.byte \x, \y, \width, \height
	.4byte \name
.endm

	.globl gRegionMapEntries
gRegionMapEntries: @ 0x0857CD6C
	@ 213 RegionMapLocation records: x, y, width, height, Japanese map-section name.
	@ Exact JP name pointers are read from ROM. Globally-linkable exact ELF symbols
	@ are used when available; otherwise the exact numeric pointer is preserved.
	region_map_location_entry 4, 11, 1, 1, gText_Rom_57C6E0 @ mapsec 0
	region_map_location_entry 4, 9, 1, 1, gText_Rom_57C6E7 @ mapsec 1
	region_map_location_entry 2, 14, 1, 1, gText_Rom_57C6EE @ mapsec 2
	region_map_location_entry 5, 3, 1, 1, gText_Rom_57C6F4 @ mapsec 3
	region_map_location_entry 3, 0, 1, 1, gText_Rom_57C6FB @ mapsec 4
	region_map_location_entry 4, 6, 1, 1, gText_Rom_57C703 @ mapsec 5
	region_map_location_entry 17, 10, 1, 1, gText_Rom_57C70A @ mapsec 6
	region_map_location_entry 1, 9, 1, 1, gText_Rom_57C711 @ mapsec 7
	region_map_location_entry 8, 10, 1, 2, gText_Rom_57C718 @ mapsec 8
	region_map_location_entry 8, 6, 2, 1, gText_Rom_57C71F @ mapsec 9
	region_map_location_entry 0, 5, 1, 2, gText_Rom_57C727 @ mapsec 10
	region_map_location_entry 12, 0, 1, 1, gText_Rom_57C72F @ mapsec 11
	region_map_location_entry 18, 3, 2, 1, gText_Rom_57C737 @ mapsec 12
	region_map_location_entry 24, 5, 2, 1, gText_Rom_57C73E @ mapsec 13
	region_map_location_entry 21, 7, 1, 1, gText_Rom_57C746 @ mapsec 14
	region_map_location_entry 27, 8, 1, 2, gText_Rom_57C74C @ mapsec 15
	region_map_location_entry 4, 10, 1, 1, gText_Rom_57C754 @ mapsec 16
	region_map_location_entry 2, 9, 2, 1, gText_Rom_57C75E @ mapsec 17
	region_map_location_entry 4, 8, 4, 1, gText_Rom_57C768 @ mapsec 18
	region_map_location_entry 0, 7, 1, 3, gText_Rom_57C772 @ mapsec 19
	region_map_location_entry 0, 10, 1, 3, gText_Rom_57C77C @ mapsec 20
	region_map_location_entry 0, 13, 2, 1, gText_Rom_57C787 @ mapsec 21
	region_map_location_entry 3, 14, 3, 1, gText_Rom_57C792 @ mapsec 22
	region_map_location_entry 6, 14, 2, 1, gText_Rom_57C79D @ mapsec 23
	region_map_location_entry 8, 12, 1, 3, gText_Rom_57C7A8 @ mapsec 24
	region_map_location_entry 8, 7, 1, 3, gText_Rom_57C7B3 @ mapsec 25
	region_map_location_entry 8, 0, 1, 6, gText_Rom_57C7BD @ mapsec 26
	region_map_location_entry 6, 3, 2, 1, gText_Rom_57C7C7 @ mapsec 27
	region_map_location_entry 4, 0, 4, 1, gText_Rom_57C7D1 @ mapsec 28
	region_map_location_entry 1, 0, 2, 3, gText_Rom_57C7DB @ mapsec 29
	region_map_location_entry 0, 2, 1, 3, gText_Rom_57C7E5 @ mapsec 30
	region_map_location_entry 1, 5, 4, 1, gText_Rom_57C7EF @ mapsec 31
	region_map_location_entry 5, 6, 3, 1, gText_Rom_57C7F9 @ mapsec 32
	region_map_location_entry 10, 6, 2, 1, gText_Rom_57C803 @ mapsec 33
	region_map_location_entry 11, 0, 1, 6, gText_Rom_57C80D @ mapsec 34
	region_map_location_entry 13, 0, 1, 4, gText_Rom_57C817 @ mapsec 35
	region_map_location_entry 14, 3, 4, 1, gText_Rom_57C821 @ mapsec 36
	region_map_location_entry 16, 4, 1, 2, gText_Rom_57C82B @ mapsec 37
	region_map_location_entry 12, 6, 5, 1, gText_Rom_57C836 @ mapsec 38
	region_map_location_entry 20, 3, 4, 3, gText_Rom_57C840 @ mapsec 39
	region_map_location_entry 24, 3, 2, 2, gText_Rom_57C84B @ mapsec 40
	region_map_location_entry 20, 6, 3, 3, gText_Rom_57C856 @ mapsec 41
	region_map_location_entry 23, 6, 3, 3, gText_Rom_57C861 @ mapsec 42
	region_map_location_entry 23, 9, 4, 1, gText_Rom_57C86C @ mapsec 43
	region_map_location_entry 24, 10, 2, 1, gText_Rom_57C877 @ mapsec 44
	region_map_location_entry 21, 10, 3, 1, gText_Rom_57C882 @ mapsec 45
	region_map_location_entry 18, 10, 3, 1, gText_Rom_57C88D @ mapsec 46
	region_map_location_entry 15, 10, 2, 1, gText_Rom_57C898 @ mapsec 47
	region_map_location_entry 12, 10, 3, 1, gText_Rom_57C8A3 @ mapsec 48
	region_map_location_entry 9, 10, 3, 1, gText_Rom_57C8AE @ mapsec 49
	region_map_location_entry 20, 3, 4, 3, gText_Rom_57C8B9 @ mapsec 50
	region_map_location_entry 20, 6, 3, 3, gText_Rom_57C8B9 @ mapsec 51
	region_map_location_entry 23, 6, 3, 3, gText_Rom_57C8B9 @ mapsec 52
	region_map_location_entry 23, 9, 4, 1, gText_Rom_57C8B9 @ mapsec 53
	region_map_location_entry 21, 7, 1, 1, gText_Rom_57C8B9 @ mapsec 54
	region_map_location_entry 1, 13, 1, 1, gText_Rom_57C8BF @ mapsec 55
	region_map_location_entry 6, 2, 1, 1, gText_Rom_57C8C7 @ mapsec 56
	region_map_location_entry 16, 2, 1, 1, gText_Rom_57C8CE @ mapsec 57
	region_map_location_entry 22, 12, 1, 1, gText_Rom_57C8D6 @ mapsec 58
	region_map_location_entry 0, 8, 1, 1, gText_Rom_57C8E0 @ mapsec 59
	region_map_location_entry 2, 5, 1, 1, gText_Rom_57C8E7 @ mapsec 60
	region_map_location_entry 6, 14, 1, 1, gText_Rom_57C8F0 @ mapsec 61
	region_map_location_entry 8, 7, 1, 1, gText_Rom_57C8F7 @ mapsec 62
	region_map_location_entry 0, 3, 1, 1, gText_Rom_57C8FF @ mapsec 63
	region_map_location_entry 1, 2, 1, 1, gText_Rom_57C8FF @ mapsec 64
	region_map_location_entry 16, 4, 1, 1, gText_Rom_57C908 @ mapsec 65
	region_map_location_entry 19, 3, 1, 1, gText_Rom_57C90F @ mapsec 66
	region_map_location_entry 24, 4, 1, 1, gText_Rom_57C918 @ mapsec 67
	region_map_location_entry 24, 9, 1, 1, gText_Rom_57C921 @ mapsec 68
	region_map_location_entry 24, 9, 1, 1, gText_Rom_57C8B9 @ mapsec 69
	region_map_location_entry 27, 9, 1, 1, gText_Rom_57C92A @ mapsec 70
	region_map_location_entry 17, 10, 1, 1, 0x0857C934 @ mapsec 71
	region_map_location_entry 21, 7, 1, 1, gText_Rom_57C93B @ mapsec 72
	region_map_location_entry 12, 14, 1, 1, 0x0857C943 @ mapsec 73
	region_map_location_entry 6, 3, 1, 1, gText_Rom_57C94C @ mapsec 74
	region_map_location_entry 7, 3, 1, 1, gText_Rom_57C94C @ mapsec 75
	region_map_location_entry 6, 3, 1, 1, gText_Rom_57C955 @ mapsec 76
	region_map_location_entry 7, 2, 1, 1, gText_Rom_57C955 @ mapsec 77
	region_map_location_entry 11, 10, 1, 1, 0x0857C95E @ mapsec 78
	region_map_location_entry 11, 10, 1, 1, gText_Rom_57C8B9 @ mapsec 79
	region_map_location_entry 13, 0, 1, 1, gText_Rom_57C967 @ mapsec 80
	region_map_location_entry 0, 10, 1, 1, gText_Rom_57C96F @ mapsec 81
	region_map_location_entry 8, 3, 1, 1, gText_Rom_57C978 @ mapsec 82
	region_map_location_entry 13, 2, 1, 1, gText_Rom_57C97F @ mapsec 83
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57C985 @ mapsec 84
	region_map_location_entry 19, 10, 1, 1, gText_Rom_57C98D @ mapsec 85
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57C994 @ mapsec 86
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57C99A @ mapsec 87
	region_map_location_entry 0, 0, 1, 1, 0x0857C99F @ mapsec 88
	region_map_location_entry 0, 0, 1, 1, 0x0857C9A6 @ mapsec 89
	region_map_location_entry 0, 0, 1, 1, 0x0857C9AD @ mapsec 90
	region_map_location_entry 0, 0, 1, 1, 0x0857C9B3 @ mapsec 91
	region_map_location_entry 0, 0, 1, 1, 0x0857C9BA @ mapsec 92
	region_map_location_entry 0, 0, 1, 1, 0x0857C9C1 @ mapsec 93
	region_map_location_entry 0, 0, 1, 1, 0x0857C9C8 @ mapsec 94
	region_map_location_entry 0, 0, 1, 1, 0x0857C9D0 @ mapsec 95
	region_map_location_entry 0, 0, 1, 1, 0x0857C9D8 @ mapsec 96
	region_map_location_entry 0, 0, 1, 1, 0x0857C9DE @ mapsec 97
	region_map_location_entry 0, 0, 1, 1, 0x0857C9E7 @ mapsec 98
	region_map_location_entry 0, 0, 1, 1, 0x0857C9EF @ mapsec 99
	region_map_location_entry 0, 0, 1, 1, 0x0857C9F7 @ mapsec 100
	region_map_location_entry 0, 0, 1, 1, 0x0857CA00 @ mapsec 101
	region_map_location_entry 0, 0, 1, 1, 0x0857CA08 @ mapsec 102
	region_map_location_entry 0, 0, 1, 1, 0x0857CA10 @ mapsec 103
	region_map_location_entry 0, 0, 1, 1, 0x0857CA18 @ mapsec 104
	region_map_location_entry 0, 0, 1, 1, 0x0857CA20 @ mapsec 105
	region_map_location_entry 0, 0, 1, 1, 0x0857CA28 @ mapsec 106
	region_map_location_entry 0, 0, 1, 1, 0x0857CA30 @ mapsec 107
	region_map_location_entry 0, 0, 1, 1, 0x0857CA38 @ mapsec 108
	region_map_location_entry 0, 0, 1, 1, 0x0857CA40 @ mapsec 109
	region_map_location_entry 0, 0, 1, 1, 0x0857CA48 @ mapsec 110
	region_map_location_entry 0, 0, 1, 1, 0x0857CA51 @ mapsec 111
	region_map_location_entry 0, 0, 1, 1, 0x0857CA5A @ mapsec 112
	region_map_location_entry 0, 0, 1, 1, 0x0857CA63 @ mapsec 113
	region_map_location_entry 0, 0, 1, 1, 0x0857CA6C @ mapsec 114
	region_map_location_entry 0, 0, 1, 1, 0x0857CA75 @ mapsec 115
	region_map_location_entry 0, 0, 1, 1, 0x0857CA7E @ mapsec 116
	region_map_location_entry 0, 0, 1, 1, 0x0857CA87 @ mapsec 117
	region_map_location_entry 0, 0, 1, 1, 0x0857CA90 @ mapsec 118
	region_map_location_entry 0, 0, 1, 1, 0x0857CA99 @ mapsec 119
	region_map_location_entry 0, 0, 1, 1, 0x0857CAA3 @ mapsec 120
	region_map_location_entry 0, 0, 1, 1, 0x0857CAAD @ mapsec 121
	region_map_location_entry 0, 0, 1, 1, 0x0857CAB7 @ mapsec 122
	region_map_location_entry 0, 0, 1, 1, 0x0857CAC0 @ mapsec 123
	region_map_location_entry 0, 0, 1, 1, 0x0857CAC9 @ mapsec 124
	region_map_location_entry 0, 0, 1, 1, 0x0857CAD2 @ mapsec 125
	region_map_location_entry 0, 0, 1, 1, 0x0857CADB @ mapsec 126
	region_map_location_entry 0, 0, 1, 1, 0x0857CAE2 @ mapsec 127
	region_map_location_entry 0, 0, 1, 1, 0x0857CAE9 @ mapsec 128
	region_map_location_entry 0, 0, 1, 1, 0x0857CAF3 @ mapsec 129
	region_map_location_entry 0, 0, 1, 1, 0x0857CAF9 @ mapsec 130
	region_map_location_entry 0, 0, 1, 1, 0x0857CAFF @ mapsec 131
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB07 @ mapsec 132
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB11 @ mapsec 133
	region_map_location_entry 0, 0, 1, 1, 0x0857CB1B @ mapsec 134
	region_map_location_entry 0, 0, 1, 1, 0x0857CB24 @ mapsec 135
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB2C @ mapsec 136
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB34 @ mapsec 137
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB3C @ mapsec 138
	region_map_location_entry 0, 0, 1, 1, 0x0857CB45 @ mapsec 139
	region_map_location_entry 0, 0, 1, 1, 0x0857CB4B @ mapsec 140
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB53 @ mapsec 141
	region_map_location_entry 0, 0, 1, 1, 0x0857CB5C @ mapsec 142
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB66 @ mapsec 143
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB6B @ mapsec 144
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB70 @ mapsec 145
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB75 @ mapsec 146
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB7A @ mapsec 147
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB7F @ mapsec 148
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CB84 @ mapsec 149
	region_map_location_entry 0, 0, 1, 1, 0x0857CB89 @ mapsec 150
	region_map_location_entry 0, 0, 1, 1, 0x0857CB90 @ mapsec 151
	region_map_location_entry 0, 0, 1, 1, 0x0857CB97 @ mapsec 152
	region_map_location_entry 0, 0, 1, 1, 0x0857CB9E @ mapsec 153
	region_map_location_entry 0, 0, 1, 1, 0x0857CBA4 @ mapsec 154
	region_map_location_entry 0, 0, 1, 1, 0x0857CBAD @ mapsec 155
	region_map_location_entry 0, 0, 1, 1, 0x0857CBB6 @ mapsec 156
	region_map_location_entry 0, 0, 1, 1, 0x0857CBBF @ mapsec 157
	region_map_location_entry 0, 0, 1, 1, 0x0857CBC8 @ mapsec 158
	region_map_location_entry 0, 0, 1, 1, 0x0857CBD1 @ mapsec 159
	region_map_location_entry 0, 0, 1, 1, 0x0857CBDB @ mapsec 160
	region_map_location_entry 0, 0, 1, 1, 0x0857CBE2 @ mapsec 161
	region_map_location_entry 0, 0, 1, 1, 0x0857CBEB @ mapsec 162
	region_map_location_entry 0, 0, 1, 1, 0x0857CBF3 @ mapsec 163
	region_map_location_entry 0, 0, 1, 1, 0x0857CBFA @ mapsec 164
	region_map_location_entry 0, 0, 1, 1, 0x0857CC04 @ mapsec 165
	region_map_location_entry 0, 0, 1, 1, 0x0857CC0D @ mapsec 166
	region_map_location_entry 0, 0, 1, 1, 0x0857CC14 @ mapsec 167
	region_map_location_entry 0, 0, 1, 1, 0x0857CC1D @ mapsec 168
	region_map_location_entry 0, 0, 1, 1, 0x0857CC26 @ mapsec 169
	region_map_location_entry 0, 0, 1, 1, 0x0857CC2F @ mapsec 170
	region_map_location_entry 0, 0, 1, 1, 0x0857CC37 @ mapsec 171
	region_map_location_entry 0, 0, 1, 1, 0x0857CC41 @ mapsec 172
	region_map_location_entry 0, 0, 1, 1, 0x0857CC4B @ mapsec 173
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CC55 @ mapsec 174
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CC5B @ mapsec 175
	region_map_location_entry 0, 0, 1, 1, 0x0857CC62 @ mapsec 176
	region_map_location_entry 0, 0, 1, 1, 0x0857CC69 @ mapsec 177
	region_map_location_entry 0, 0, 1, 1, 0x0857CC73 @ mapsec 178
	region_map_location_entry 0, 0, 1, 1, 0x0857CC7D @ mapsec 179
	region_map_location_entry 0, 0, 1, 1, 0x0857CC86 @ mapsec 180
	region_map_location_entry 0, 0, 1, 1, 0x0857CC8C @ mapsec 181
	region_map_location_entry 0, 0, 1, 1, 0x0857CC94 @ mapsec 182
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CC9C @ mapsec 183
	region_map_location_entry 0, 0, 1, 1, 0x0857CCA5 @ mapsec 184
	region_map_location_entry 0, 0, 1, 1, 0x0857CCAF @ mapsec 185
	region_map_location_entry 0, 0, 1, 1, 0x0857CCB9 @ mapsec 186
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CCC1 @ mapsec 187
	region_map_location_entry 0, 0, 1, 1, 0x0857CCCA @ mapsec 188
	region_map_location_entry 0, 0, 1, 1, 0x0857CCD3 @ mapsec 189
	region_map_location_entry 0, 0, 1, 1, 0x0857CCDC @ mapsec 190
	region_map_location_entry 0, 0, 1, 1, 0x0857CCE4 @ mapsec 191
	region_map_location_entry 0, 0, 1, 1, 0x0857CCEE @ mapsec 192
	region_map_location_entry 0, 0, 1, 1, 0x0857CCF7 @ mapsec 193
	region_map_location_entry 0, 0, 1, 1, 0x0857CD00 @ mapsec 194
	region_map_location_entry 0, 0, 1, 1, 0x0857CD09 @ mapsec 195
	region_map_location_entry 0, 0, 1, 1, 0x0857CD12 @ mapsec 196
	region_map_location_entry 19, 3, 1, 1, gText_Rom_57CD1C @ mapsec 197
	region_map_location_entry 6, 3, 1, 1, gText_Rom_57CD26 @ mapsec 198
	region_map_location_entry 8, 2, 1, 1, gText_Rom_57CD30 @ mapsec 199
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CCC1 @ mapsec 200
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CD38 @ mapsec 201
	region_map_location_entry 22, 12, 1, 1, gText_Rom_57CD41 @ mapsec 202
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CD49 @ mapsec 203
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57C8B9 @ mapsec 204
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CD51 @ mapsec 205
	region_map_location_entry 0, 10, 1, 3, gText_Rom_57C8B9 @ mapsec 206
	region_map_location_entry 24, 3, 2, 2, gText_Rom_57C8B9 @ mapsec 207
	region_map_location_entry 24, 10, 2, 1, gText_Rom_57C8B9 @ mapsec 208
	region_map_location_entry 2, 0, 1, 1, gText_Rom_57CD59 @ mapsec 209
	region_map_location_entry 6, 8, 1, 1, gText_Rom_57CC9C @ mapsec 210
	region_map_location_entry 0, 0, 1, 1, gText_Rom_57CC55 @ mapsec 211
	region_map_location_entry 8, 4, 1, 1, gText_Rom_57CD62 @ mapsec 212
.purgem region_map_location_entry

	.globl sRegionMap_SpecialPlaceLocations
sRegionMap_SpecialPlaceLocations: @ 0x0857D414
	@ 24 {special map section, displayed map section} pairs; final pair is the sentinel.
	.2byte 0x00CE, 0x0014 @ pair 0
	.2byte 0x0032, 0x0027 @ pair 1
	.2byte 0x00CF, 0x002C @ pair 2
	.2byte 0x0033, 0x0029 @ pair 3
	.2byte 0x0034, 0x002A @ pair 4
	.2byte 0x0035, 0x002B @ pair 5
	.2byte 0x00D0, 0x002C @ pair 6
	.2byte 0x0036, 0x000E @ pair 7
	.2byte 0x0045, 0x002B @ pair 8
	.2byte 0x00C5, 0x000C @ pair 9
	.2byte 0x0042, 0x000C @ pair 10
	.2byte 0x00C6, 0x001B @ pair 11
	.2byte 0x004F, 0x0031 @ pair 12
	.2byte 0x003B, 0x0013 @ pair 13
	.2byte 0x004C, 0x001B @ pair 14
	.2byte 0x0041, 0x0025 @ pair 15
	.2byte 0x0055, 0x002E @ pair 16
	.2byte 0x00C7, 0x001A @ pair 17
	.2byte 0x00D4, 0x001A @ pair 18
	.2byte 0x00D1, 0x001D @ pair 19
	.2byte 0x00D2, 0x0012 @ pair 20
	.2byte 0x00CA, 0x0012 @ pair 21
	.2byte 0x003D, 0x0017 @ pair 22
	.2byte 0x00D5, 0x00D5 @ pair 23

	.globl sMarineCaveMapSecIds
sMarineCaveMapSecIds: @ 0x0857D474
	.2byte 0x00CB, 0x00CC, 0x00CC

	.globl sTerraOrMarineCaveMapSecIds
sTerraOrMarineCaveMapSecIds: @ 0x0857D47A
	@ 16 abnormal-weather location -> route map-section IDs.
	.2byte 0x001D, 0x001D, 0x001E, 0x001E, 0x001F, 0x001F, 0x0021, 0x0021
	.2byte 0x0014, 0x0014, 0x0028, 0x0028, 0x002A, 0x002A, 0x002C, 0x002C
	.align 2, 0

	.globl sMarineCaveLocationCoords
sMarineCaveLocationCoords: @ 0x0857D49C
	@ Eight {x, y} Region Map cursor coordinates for Marine Cave.
	.2byte 0, 10 @ location 0
	.2byte 0, 12 @ location 1
	.2byte 24, 3 @ location 2
	.2byte 25, 4 @ location 3
	.2byte 25, 6 @ location 4
	.2byte 25, 7 @ location 5
	.2byte 24, 10 @ location 6
	.2byte 24, 10 @ location 7

	.globl sMapSecAquaHideoutOld
sMapSecAquaHideoutOld: @ 0x0857D4BC
	.byte 0x42
	.align 2, 0

	.globl sRegionMapCursorOam
sRegionMapCursorOam: @ 0x0857D4C0
	.2byte 0x0000, 0x4000, 0x0400, 0x0000

	.globl sRegionMapCursorAnim1
sRegionMapCursorAnim1: @ 0x0857D4C8
	.2byte 0x0000, 0x0014, 0x0004, 0x0014, 0xFFFE, 0x0000

	.globl sRegionMapCursorAnim2
sRegionMapCursorAnim2: @ 0x0857D4D4
	.2byte 0x0000, 0x000A, 0x0010, 0x000A, 0x0020, 0x000A, 0x0010, 0x000A
	.2byte 0xFFFE, 0x0000

	.globl sRegionMapCursorAnimTable
sRegionMapCursorAnimTable: @ 0x0857D4E8
	.4byte sRegionMapCursorAnim1
	.4byte sRegionMapCursorAnim2

	.globl sRegionMapCursorSpritePalette
sRegionMapCursorSpritePalette: @ 0x0857D4F0
	.4byte 0x0857B1BC
	.2byte 0x0000
	.2byte 0x0000

	.globl sRegionMapCursorSpriteTemplate
sRegionMapCursorSpriteTemplate: @ 0x0857D4F8
	@ Internal proven pointers are semantic; external fields retain exact JP values.
	rodata_sprite_template 0x0000, 0x0000, sRegionMapCursorOam, sRegionMapCursorAnimTable, 0x00000000, gDummySpriteAffineAnimTable, SpriteCallback_CursorFull

	.globl sRegionMapPlayerIconOam
sRegionMapPlayerIconOam: @ 0x0857D510
	.2byte 0x0000, 0x4000, 0x0800, 0x0000

	.globl sRegionMapPlayerIconAnim1
sRegionMapPlayerIconAnim1: @ 0x0857D518
	.2byte 0x0000, 0x0005, 0xFFFF, 0x0000

	.globl sRegionMapPlayerIconAnimTable
sRegionMapPlayerIconAnimTable: @ 0x0857D520
	.4byte sRegionMapPlayerIconAnim1

	.globl sMapSecIdsOffMap
sMapSecIdsOffMap: @ 0x0857D524
	@ Birth Island, Faraway Island, Navel Rock.
	.byte 0xC8, 0xC9, 0xD3
	.align 2, 0

	.globl sRegionMapFramePal
sRegionMapFramePal: @ 0x0857D528
	@ 16-color Region Map frame palette.
	.2byte 0x0000, 0x7FB9, 0x7F58, 0x318C, 0x6739, 0x01F7, 0x0000, 0x6ACF
	.2byte 0x55C0, 0x4524, 0x0ABF, 0x08FF, 0x1575, 0x0000, 0x0000, 0x7FFF

	.globl sRegionMapFrameGfxLZ
sRegionMapFrameGfxLZ:
	.incbin "build/graphics/pokenav/region_map/frame.4bpp.lz"
	.if (. - sRegionMapFrameGfxLZ) != 0x38
	.error "sRegionMapFrameGfxLZ compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0857D580: region_map.s: MCB2_FlyMap
	.globl gRegionMapData_0857D580
gRegionMapData_0857D580: @ 0x0857D580
	@ confirmed GBA LZ77 stream: compressed=0xB5, decompressed=0x500
sLz77Block_0857D580:
	@ analyzed canonical ROM range 0x0857D580-0x0857D657
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/0857D580.bin.lz"
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x67, 0x00, 0x00, 0x00
	.byte 0x00, 0x5F, 0x6F, 0x9F, 0x62, 0x98, 0x39, 0x10, 0x3E, 0x6C, 0x2D, 0xC6, 0x20, 0x00, 0x00, 0x00
	.byte 0x00, 0xFF, 0x7F
	@ semantic exact asset for 0x0857D658: sFlyTargetIcons_Gfx
	.globl sFlyTargetIcons_Gfx
sFlyTargetIcons_Gfx:
	.incbin "build/graphics/pokenav/region_map/fly_target_icons.4bpp.lz"
	.if (. - sFlyTargetIcons_Gfx) != 0xD4
	.error "sFlyTargetIcons_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0857D72C: contest_painting_effects.s: sub_08124DF4
.macro map_heal_location map_group, map_num, heal_location
	.byte \map_group, \map_num, \heal_location
.endm

	.globl sMapHealLocations
sMapHealLocations: @ 0x0857D72C
	@ MAPSEC_LITTLEROOT_TOWN through MAPSEC_ROUTE_134.
	@ Entry: map group, map number, heal location. If heal location is 0, group/number is used.
	map_heal_location 0x00, 0x09, 0x01 @ mapsec 0
	map_heal_location 0x00, 0x0A, 0x0E @ mapsec 1
	map_heal_location 0x00, 0x0B, 0x0F @ mapsec 2
	map_heal_location 0x00, 0x0C, 0x10 @ mapsec 3
	map_heal_location 0x00, 0x0D, 0x11 @ mapsec 4
	map_heal_location 0x00, 0x0E, 0x12 @ mapsec 5
	map_heal_location 0x00, 0x0F, 0x13 @ mapsec 6
	map_heal_location 0x00, 0x00, 0x03 @ mapsec 7
	map_heal_location 0x00, 0x01, 0x04 @ mapsec 8
	map_heal_location 0x00, 0x02, 0x05 @ mapsec 9
	map_heal_location 0x00, 0x03, 0x06 @ mapsec 10
	map_heal_location 0x00, 0x04, 0x07 @ mapsec 11
	map_heal_location 0x00, 0x05, 0x08 @ mapsec 12
	map_heal_location 0x00, 0x06, 0x09 @ mapsec 13
	map_heal_location 0x00, 0x07, 0x0A @ mapsec 14
	map_heal_location 0x00, 0x08, 0x0B @ mapsec 15
	map_heal_location 0x00, 0x10, 0x00 @ mapsec 16
	map_heal_location 0x00, 0x11, 0x00 @ mapsec 17
	map_heal_location 0x00, 0x12, 0x00 @ mapsec 18
	map_heal_location 0x00, 0x13, 0x00 @ mapsec 19
	map_heal_location 0x00, 0x14, 0x00 @ mapsec 20
	map_heal_location 0x00, 0x15, 0x00 @ mapsec 21
	map_heal_location 0x00, 0x16, 0x00 @ mapsec 22
	map_heal_location 0x00, 0x17, 0x00 @ mapsec 23
	map_heal_location 0x00, 0x18, 0x00 @ mapsec 24
	map_heal_location 0x00, 0x19, 0x00 @ mapsec 25
	map_heal_location 0x00, 0x1A, 0x00 @ mapsec 26
	map_heal_location 0x00, 0x1B, 0x00 @ mapsec 27
	map_heal_location 0x00, 0x1C, 0x00 @ mapsec 28
	map_heal_location 0x00, 0x1D, 0x00 @ mapsec 29
	map_heal_location 0x00, 0x1E, 0x00 @ mapsec 30
	map_heal_location 0x00, 0x1F, 0x00 @ mapsec 31
	map_heal_location 0x00, 0x20, 0x00 @ mapsec 32
	map_heal_location 0x00, 0x21, 0x00 @ mapsec 33
	map_heal_location 0x00, 0x22, 0x00 @ mapsec 34
	map_heal_location 0x00, 0x23, 0x00 @ mapsec 35
	map_heal_location 0x00, 0x24, 0x00 @ mapsec 36
	map_heal_location 0x00, 0x25, 0x00 @ mapsec 37
	map_heal_location 0x00, 0x26, 0x00 @ mapsec 38
	map_heal_location 0x00, 0x27, 0x00 @ mapsec 39
	map_heal_location 0x00, 0x28, 0x00 @ mapsec 40
	map_heal_location 0x00, 0x29, 0x00 @ mapsec 41
	map_heal_location 0x00, 0x2A, 0x00 @ mapsec 42
	map_heal_location 0x00, 0x2B, 0x00 @ mapsec 43
	map_heal_location 0x00, 0x2C, 0x00 @ mapsec 44
	map_heal_location 0x00, 0x2D, 0x00 @ mapsec 45
	map_heal_location 0x00, 0x2E, 0x00 @ mapsec 46
	map_heal_location 0x00, 0x2F, 0x00 @ mapsec 47
	map_heal_location 0x00, 0x30, 0x00 @ mapsec 48
	map_heal_location 0x00, 0x31, 0x00 @ mapsec 49
.purgem map_heal_location
	.align 2, 0

	.globl sEverGrandeCityNames
sEverGrandeCityNames: @ 0x0857D7C4
	.4byte gText_Rom_5CBD00 @ Pokemon League
	.4byte gText_Rom_5CBD09 @ Pokemon Center

	.globl sMultiNameFlyDestinations
sMultiNameFlyDestinations: @ 0x0857D7CC
	.4byte sEverGrandeCityNames
	.2byte 0x000F @ local JP map section ID
	.2byte 0x08B4 @ local JP landmark flag

	.globl sFlyMapBgTemplates
sFlyMapBgTemplates: @ 0x0857D7D4
	@ Three packed BgTemplate records for BG0, BG1 and BG2.
	.4byte 0x000001F0 @ BG template 0
	.4byte 0x000011ED @ BG template 1
	.4byte 0x00002DCA @ BG template 2

.macro fly_window_template bg, left, top, width, height, palette, baseblock
	.byte \bg, \left, \top, \width, \height, \palette
	.2byte \baseblock
.endm

	.globl sFlyMapWindowTemplates
sFlyMapWindowTemplates: @ 0x0857D7E0
	fly_window_template 0x00, 19, 17, 10, 2, 15, 0x0001 @ window 0
	fly_window_template 0x00, 19, 15, 10, 4, 15, 0x0015 @ window 1
	fly_window_template 0x00, 1, 18, 10, 2, 15, 0x003D @ window 2
	fly_window_template 0xFF, 0, 0, 0, 0, 0, 0x0000 @ window 3
.purgem fly_window_template

	.globl sFlyTargetIconsSpritePalette
sFlyTargetIconsSpritePalette: @ 0x0857D800
	.4byte 0x0857D638
	.2byte 0x0002
	.2byte 0x0000

	.globl sRedOutlineFlyDestinations
sRedOutlineFlyDestinations: @ 0x0857D808
	@ Two {flag, map section} pairs; second pair is the sentinel.
	.2byte 0x08A8, 0x003A, 0xFFFF, 0x00D5

	.globl sFlyDestIcon_OamData
sFlyDestIcon_OamData: @ 0x0857D810
	.2byte 0x0000, 0x0000, 0x0800, 0x0000

	.globl sFlyDestIcon_Anim_8x8CanFly
sFlyDestIcon_Anim_8x8CanFly: @ 0x0857D818
	.2byte 0x0000, 0x0005, 0xFFFF, 0x0000

	.globl sFlyDestIcon_Anim_16x8CanFly
sFlyDestIcon_Anim_16x8CanFly: @ 0x0857D820
	.2byte 0x0001, 0x0005, 0xFFFF, 0x0000

	.globl sFlyDestIcon_Anim_8x16CanFly
sFlyDestIcon_Anim_8x16CanFly: @ 0x0857D828
	.2byte 0x0003, 0x0005, 0xFFFF, 0x0000

	.globl sFlyDestIcon_Anim_8x8CantFly
sFlyDestIcon_Anim_8x8CantFly: @ 0x0857D830
	.2byte 0x0005, 0x0005, 0xFFFF, 0x0000

	.globl sFlyDestIcon_Anim_16x8CantFly
sFlyDestIcon_Anim_16x8CantFly: @ 0x0857D838
	.2byte 0x0006, 0x0005, 0xFFFF, 0x0000

	.globl sFlyDestIcon_Anim_8x16CantFly
sFlyDestIcon_Anim_8x16CantFly: @ 0x0857D840
	.2byte 0x0008, 0x0005, 0xFFFF, 0x0000

	.globl sFlyDestIcon_Anim_RedOutline
sFlyDestIcon_Anim_RedOutline: @ 0x0857D848
	.2byte 0x000A, 0x0005, 0xFFFF, 0x0000

	.globl sFlyDestIcon_Anims
sFlyDestIcon_Anims: @ 0x0857D850
	.4byte sFlyDestIcon_Anim_8x8CanFly
	.4byte sFlyDestIcon_Anim_16x8CanFly
	.4byte sFlyDestIcon_Anim_8x16CanFly
	.4byte sFlyDestIcon_Anim_8x8CantFly
	.4byte sFlyDestIcon_Anim_16x8CantFly
	.4byte sFlyDestIcon_Anim_8x16CantFly
	.4byte sFlyDestIcon_Anim_RedOutline

	.globl sFlyDestIconSpriteTemplate
sFlyDestIconSpriteTemplate: @ 0x0857D86C
	@ Internal proven pointers are semantic; external fields retain exact JP values.
	rodata_sprite_template 0x0002, 0x0002, sFlyDestIcon_OamData, sFlyDestIcon_Anims, 0x00000000, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	@ Pointillism point packing used by the image-processing effect:
	@ bits 0: offset down-left, bits 1-2: color type, bits 3-5: delta.
.macro pointillism_point x, y, delta, color_type, offset_down_left
	.byte \x, \y, ((\delta << 3) | (\color_type << 1) | \offset_down_left)
.endm

	.globl sPointillismPoints
sPointillismPoints: @ 0x0857D884
	pointillism_point 0, 29, 3, 2, 0 @ 0
	pointillism_point 14, 30, 3, 1, 1 @ 1
	pointillism_point 0, 1, 6, 1, 0 @ 2
	pointillism_point 46, 30, 6, 3, 1 @ 3
	pointillism_point 10, 34, 3, 3, 1 @ 4
	pointillism_point 5, 38, 5, 3, 0 @ 5
	pointillism_point 18, 23, 3, 3, 0 @ 6
	pointillism_point 26, 3, 2, 0, 1 @ 7
	pointillism_point 5, 17, 3, 0, 0 @ 8
	pointillism_point 5, 39, 5, 3, 1 @ 9
	pointillism_point 26, 63, 2, 1, 0 @ 10
	pointillism_point 34, 63, 2, 3, 0 @ 11
	pointillism_point 43, 47, 5, 3, 0 @ 12
	pointillism_point 17, 2, 5, 2, 1 @ 13
	pointillism_point 35, 13, 5, 0, 0 @ 14
	pointillism_point 23, 12, 3, 0, 1 @ 15
	pointillism_point 47, 14, 2, 1, 1 @ 16
	pointillism_point 48, 24, 4, 0, 0 @ 17
	pointillism_point 45, 40, 4, 1, 0 @ 18
	pointillism_point 1, 3, 3, 0, 1 @ 19
	pointillism_point 14, 42, 5, 1, 1 @ 20
	pointillism_point 34, 21, 4, 2, 1 @ 21
	pointillism_point 34, 10, 4, 3, 0 @ 22
	pointillism_point 57, 6, 4, 1, 1 @ 23
	pointillism_point 22, 7, 5, 3, 1 @ 24
	pointillism_point 34, 58, 3, 1, 1 @ 25
	pointillism_point 59, 54, 6, 2, 1 @ 26
	pointillism_point 10, 43, 4, 2, 0 @ 27
	pointillism_point 54, 9, 2, 1, 0 @ 28
	pointillism_point 28, 47, 4, 1, 1 @ 29
	pointillism_point 46, 56, 5, 2, 0 @ 30
	pointillism_point 5, 42, 4, 0, 0 @ 31
	pointillism_point 7, 20, 6, 1, 0 @ 32
	pointillism_point 49, 8, 2, 3, 1 @ 33
	pointillism_point 26, 36, 5, 2, 1 @ 34
	pointillism_point 34, 10, 2, 3, 0 @ 35
	pointillism_point 27, 38, 5, 1, 1 @ 36
	pointillism_point 41, 22, 2, 0, 1 @ 37
	pointillism_point 53, 8, 2, 2, 0 @ 38
	pointillism_point 30, 8, 2, 2, 0 @ 39
	pointillism_point 5, 49, 2, 2, 0 @ 40
	pointillism_point 56, 49, 2, 3, 1 @ 41
	pointillism_point 52, 51, 2, 1, 0 @ 42
	pointillism_point 17, 9, 3, 3, 1 @ 43
	pointillism_point 40, 61, 6, 1, 0 @ 44
	pointillism_point 53, 3, 3, 3, 0 @ 45
	pointillism_point 60, 43, 5, 3, 0 @ 46
	pointillism_point 16, 1, 2, 3, 1 @ 47
	pointillism_point 3, 62, 4, 1, 0 @ 48
	pointillism_point 23, 24, 6, 2, 0 @ 49
	pointillism_point 8, 41, 3, 0, 1 @ 50
	pointillism_point 3, 36, 5, 0, 0 @ 51
	pointillism_point 61, 51, 5, 3, 1 @ 52
	pointillism_point 49, 36, 3, 0, 1 @ 53
	pointillism_point 27, 24, 4, 3, 0 @ 54
	pointillism_point 7, 13, 4, 2, 1 @ 55
	pointillism_point 45, 63, 2, 1, 0 @ 56
	pointillism_point 47, 21, 4, 2, 1 @ 57
	pointillism_point 41, 15, 2, 1, 0 @ 58
	pointillism_point 7, 44, 2, 1, 0 @ 59
	pointillism_point 44, 11, 4, 3, 0 @ 60
	pointillism_point 18, 26, 2, 3, 0 @ 61
	pointillism_point 0, 11, 5, 3, 1 @ 62
	pointillism_point 22, 53, 4, 2, 0 @ 63
	pointillism_point 31, 28, 4, 1, 0 @ 64
	pointillism_point 41, 51, 4, 3, 1 @ 65
	pointillism_point 59, 48, 2, 3, 1 @ 66
	pointillism_point 17, 6, 6, 2, 1 @ 67
	pointillism_point 62, 49, 5, 3, 1 @ 68
	pointillism_point 17, 58, 4, 2, 1 @ 69
	pointillism_point 42, 2, 3, 0, 1 @ 70
	pointillism_point 51, 24, 6, 2, 1 @ 71
	pointillism_point 42, 32, 4, 0, 1 @ 72
	pointillism_point 46, 50, 3, 1, 1 @ 73
	pointillism_point 59, 31, 4, 1, 1 @ 74
	pointillism_point 57, 41, 5, 1, 0 @ 75
	pointillism_point 46, 49, 5, 0, 1 @ 76
	pointillism_point 42, 14, 5, 2, 1 @ 77
	pointillism_point 45, 0, 3, 3, 1 @ 78
	pointillism_point 56, 40, 3, 1, 1 @ 79
	pointillism_point 20, 59, 5, 1, 1 @ 80
	pointillism_point 46, 4, 4, 3, 0 @ 81
	pointillism_point 54, 48, 2, 0, 1 @ 82
	pointillism_point 59, 33, 5, 2, 1 @ 83
	pointillism_point 43, 63, 3, 1, 1 @ 84
	pointillism_point 32, 19, 6, 0, 1 @ 85
	pointillism_point 51, 12, 6, 0, 0 @ 86
	pointillism_point 34, 43, 5, 1, 1 @ 87
	pointillism_point 22, 2, 3, 3, 0 @ 88
	pointillism_point 28, 18, 3, 2, 0 @ 89
	pointillism_point 15, 60, 6, 3, 0 @ 90
	pointillism_point 56, 16, 5, 2, 1 @ 91
	pointillism_point 24, 47, 5, 2, 1 @ 92
	pointillism_point 53, 59, 2, 0, 1 @ 93
	pointillism_point 55, 49, 2, 1, 1 @ 94
	pointillism_point 19, 61, 5, 3, 1 @ 95
	pointillism_point 30, 44, 6, 1, 1 @ 96
	pointillism_point 46, 55, 2, 1, 0 @ 97
	pointillism_point 60, 31, 6, 1, 1 @ 98
	pointillism_point 50, 42, 4, 3, 1 @ 99
	pointillism_point 13, 59, 3, 2, 0 @ 100
	pointillism_point 53, 42, 4, 3, 1 @ 101
	pointillism_point 9, 61, 4, 3, 1 @ 102
	pointillism_point 18, 11, 3, 0, 0 @ 103
	pointillism_point 12, 21, 3, 2, 1 @ 104
	pointillism_point 32, 1, 3, 2, 0 @ 105
	pointillism_point 8, 59, 3, 2, 0 @ 106
	pointillism_point 18, 55, 6, 1, 1 @ 107
	pointillism_point 21, 3, 5, 2, 0 @ 108
	pointillism_point 42, 59, 6, 0, 1 @ 109
	pointillism_point 15, 4, 6, 2, 1 @ 110
	pointillism_point 8, 23, 6, 1, 1 @ 111
	pointillism_point 56, 61, 5, 1, 0 @ 112
	pointillism_point 47, 53, 2, 3, 0 @ 113
	pointillism_point 16, 53, 2, 3, 0 @ 114
	pointillism_point 35, 19, 5, 2, 0 @ 115
	pointillism_point 47, 6, 4, 0, 0 @ 116
	pointillism_point 39, 58, 4, 2, 0 @ 117
	pointillism_point 0, 28, 5, 1, 0 @ 118
	pointillism_point 3, 57, 3, 2, 1 @ 119
	pointillism_point 40, 7, 3, 1, 0 @ 120
	pointillism_point 32, 10, 6, 3, 1 @ 121
	pointillism_point 7, 53, 5, 2, 1 @ 122
	pointillism_point 21, 47, 5, 2, 0 @ 123
	pointillism_point 16, 44, 4, 1, 1 @ 124
	pointillism_point 63, 41, 2, 2, 0 @ 125
	pointillism_point 42, 33, 6, 3, 0 @ 126
	pointillism_point 52, 26, 5, 2, 0 @ 127
	pointillism_point 28, 61, 6, 1, 1 @ 128
	pointillism_point 56, 43, 4, 1, 0 @ 129
	pointillism_point 53, 40, 3, 3, 1 @ 130
	pointillism_point 61, 15, 3, 2, 0 @ 131
	pointillism_point 30, 62, 3, 1, 1 @ 132
	pointillism_point 12, 62, 3, 3, 1 @ 133
	pointillism_point 43, 49, 5, 2, 0 @ 134
	pointillism_point 50, 57, 2, 0, 1 @ 135
	pointillism_point 5, 9, 2, 0, 1 @ 136
	pointillism_point 4, 56, 5, 1, 0 @ 137
	pointillism_point 50, 0, 2, 3, 0 @ 138
	pointillism_point 19, 11, 6, 0, 1 @ 139
	pointillism_point 52, 42, 2, 1, 1 @ 140
	pointillism_point 44, 34, 4, 0, 1 @ 141
	pointillism_point 57, 47, 2, 2, 1 @ 142
	pointillism_point 55, 40, 3, 3, 0 @ 143
	pointillism_point 7, 59, 5, 2, 1 @ 144
	pointillism_point 17, 3, 5, 0, 0 @ 145
	pointillism_point 45, 48, 3, 3, 0 @ 146
	pointillism_point 49, 17, 2, 0, 1 @ 147
	pointillism_point 35, 1, 3, 3, 0 @ 148
	pointillism_point 61, 49, 6, 2, 0 @ 149
	pointillism_point 28, 2, 6, 2, 0 @ 150
	pointillism_point 33, 14, 4, 2, 1 @ 151
	pointillism_point 61, 7, 2, 3, 1 @ 152
	pointillism_point 51, 21, 2, 0, 0 @ 153
	pointillism_point 41, 50, 6, 1, 0 @ 154
	pointillism_point 24, 31, 6, 0, 0 @ 155
	pointillism_point 45, 59, 6, 0, 0 @ 156
	pointillism_point 39, 62, 2, 3, 0 @ 157
	pointillism_point 49, 21, 2, 1, 0 @ 158
	pointillism_point 48, 37, 2, 3, 1 @ 159
	pointillism_point 51, 6, 6, 2, 0 @ 160
	pointillism_point 0, 41, 3, 0, 0 @ 161
	pointillism_point 60, 3, 2, 1, 0 @ 162
	pointillism_point 44, 12, 2, 0, 1 @ 163
	pointillism_point 9, 48, 6, 0, 0 @ 164
	pointillism_point 16, 14, 2, 0, 1 @ 165
	pointillism_point 39, 22, 3, 1, 1 @ 166
	pointillism_point 12, 59, 5, 3, 0 @ 167
	pointillism_point 43, 51, 3, 3, 0 @ 168
	pointillism_point 19, 45, 5, 2, 1 @ 169
	pointillism_point 17, 36, 5, 0, 1 @ 170
	pointillism_point 52, 62, 5, 1, 1 @ 171
	pointillism_point 36, 30, 4, 0, 1 @ 172
	pointillism_point 39, 26, 5, 2, 1 @ 173
	pointillism_point 4, 57, 2, 3, 0 @ 174
	pointillism_point 62, 51, 4, 3, 0 @ 175
	pointillism_point 27, 46, 4, 2, 1 @ 176
	pointillism_point 12, 6, 3, 0, 1 @ 177
	pointillism_point 37, 25, 3, 0, 0 @ 178
	pointillism_point 29, 51, 6, 1, 1 @ 179
	pointillism_point 29, 40, 5, 2, 1 @ 180
	pointillism_point 28, 16, 5, 1, 0 @ 181
	pointillism_point 31, 53, 3, 3, 0 @ 182
	pointillism_point 52, 2, 2, 0, 0 @ 183
	pointillism_point 43, 58, 2, 2, 0 @ 184
	pointillism_point 13, 11, 2, 2, 1 @ 185
	pointillism_point 12, 44, 2, 0, 0 @ 186
	pointillism_point 55, 58, 3, 0, 1 @ 187
	pointillism_point 6, 19, 2, 3, 1 @ 188
	pointillism_point 36, 16, 4, 2, 1 @ 189
	pointillism_point 36, 4, 3, 3, 0 @ 190
	pointillism_point 0, 53, 6, 2, 0 @ 191
	pointillism_point 58, 0, 6, 3, 1 @ 192
	pointillism_point 60, 7, 3, 1, 0 @ 193
	pointillism_point 43, 40, 6, 3, 0 @ 194
	pointillism_point 52, 57, 5, 3, 1 @ 195
	pointillism_point 40, 9, 3, 3, 1 @ 196
	pointillism_point 56, 49, 6, 0, 0 @ 197
	pointillism_point 22, 37, 6, 0, 1 @ 198
	pointillism_point 24, 40, 6, 0, 1 @ 199
	pointillism_point 24, 12, 4, 1, 0 @ 200
	pointillism_point 6, 57, 5, 2, 1 @ 201
	pointillism_point 61, 32, 4, 2, 0 @ 202
	pointillism_point 46, 39, 4, 0, 1 @ 203
	pointillism_point 62, 24, 3, 0, 0 @ 204
	pointillism_point 21, 60, 4, 2, 0 @ 205
	pointillism_point 6, 27, 4, 3, 0 @ 206
	pointillism_point 21, 14, 4, 1, 0 @ 207
	pointillism_point 10, 13, 3, 3, 1 @ 208
	pointillism_point 24, 22, 6, 2, 0 @ 209
	pointillism_point 16, 40, 4, 0, 1 @ 210
	pointillism_point 32, 17, 2, 0, 1 @ 211
	pointillism_point 54, 50, 2, 2, 1 @ 212
	pointillism_point 59, 46, 4, 2, 0 @ 213
	pointillism_point 31, 45, 2, 1, 0 @ 214
	pointillism_point 54, 46, 4, 0, 0 @ 215
	pointillism_point 11, 23, 6, 1, 1 @ 216
	pointillism_point 38, 3, 3, 3, 1 @ 217
	pointillism_point 8, 25, 6, 0, 1 @ 218
	pointillism_point 42, 24, 4, 2, 1 @ 219
	pointillism_point 53, 45, 5, 2, 1 @ 220
	pointillism_point 48, 56, 3, 0, 0 @ 221
	pointillism_point 28, 37, 2, 2, 0 @ 222
	pointillism_point 28, 34, 5, 0, 0 @ 223
	pointillism_point 8, 35, 4, 0, 1 @ 224
	pointillism_point 38, 30, 6, 0, 0 @ 225
	pointillism_point 25, 15, 2, 2, 1 @ 226
	pointillism_point 16, 47, 4, 1, 0 @ 227
	pointillism_point 18, 2, 4, 2, 1 @ 228
	pointillism_point 60, 1, 3, 2, 1 @ 229
	pointillism_point 14, 20, 3, 0, 0 @ 230
	pointillism_point 13, 24, 2, 3, 1 @ 231
	pointillism_point 34, 11, 6, 0, 1 @ 232
	pointillism_point 19, 52, 4, 0, 1 @ 233
	pointillism_point 15, 45, 6, 3, 0 @ 234
	pointillism_point 57, 31, 4, 2, 1 @ 235
	pointillism_point 24, 16, 3, 3, 1 @ 236
	pointillism_point 45, 32, 4, 0, 0 @ 237
	pointillism_point 25, 11, 6, 0, 1 @ 238
	pointillism_point 51, 19, 2, 2, 0 @ 239
	pointillism_point 46, 17, 4, 0, 1 @ 240
	pointillism_point 45, 10, 6, 3, 1 @ 241
	pointillism_point 7, 21, 3, 1, 1 @ 242
	pointillism_point 50, 4, 6, 1, 0 @ 243
	pointillism_point 6, 24, 3, 1, 1 @ 244
	pointillism_point 19, 36, 2, 1, 0 @ 245
	pointillism_point 54, 34, 2, 3, 0 @ 246
	pointillism_point 29, 41, 3, 2, 0 @ 247
	pointillism_point 53, 23, 4, 0, 1 @ 248
	pointillism_point 54, 23, 5, 1, 1 @ 249
	pointillism_point 53, 50, 3, 0, 1 @ 250
	pointillism_point 42, 15, 5, 3, 0 @ 251
	pointillism_point 16, 0, 6, 2, 0 @ 252
	pointillism_point 2, 14, 5, 0, 0 @ 253
	pointillism_point 49, 50, 6, 1, 0 @ 254
	pointillism_point 59, 5, 4, 0, 0 @ 255
	pointillism_point 54, 38, 2, 1, 0 @ 256
	pointillism_point 52, 6, 6, 2, 0 @ 257
	pointillism_point 30, 49, 6, 1, 0 @ 258
	pointillism_point 53, 5, 6, 2, 0 @ 259
	pointillism_point 30, 19, 2, 2, 1 @ 260
	pointillism_point 21, 20, 5, 2, 0 @ 261
	pointillism_point 41, 28, 3, 0, 0 @ 262
	pointillism_point 36, 36, 2, 1, 0 @ 263
	pointillism_point 34, 41, 3, 0, 0 @ 264
	pointillism_point 52, 54, 6, 0, 0 @ 265
	pointillism_point 30, 1, 4, 1, 1 @ 266
	pointillism_point 12, 60, 4, 2, 0 @ 267
	pointillism_point 10, 61, 2, 3, 0 @ 268
	pointillism_point 39, 30, 4, 1, 1 @ 269
	pointillism_point 21, 2, 2, 1, 0 @ 270
	pointillism_point 17, 25, 5, 1, 0 @ 271
	pointillism_point 29, 49, 2, 2, 1 @ 272
	pointillism_point 3, 59, 5, 1, 0 @ 273
	pointillism_point 33, 25, 5, 2, 0 @ 274
	pointillism_point 10, 35, 2, 0, 1 @ 275
	pointillism_point 37, 17, 3, 1, 0 @ 276
	pointillism_point 26, 10, 6, 2, 0 @ 277
	pointillism_point 59, 11, 6, 1, 1 @ 278
	pointillism_point 33, 11, 6, 3, 1 @ 279
	pointillism_point 1, 49, 5, 0, 0 @ 280
	pointillism_point 53, 29, 4, 3, 1 @ 281
	pointillism_point 44, 48, 6, 0, 1 @ 282
	pointillism_point 46, 57, 5, 2, 1 @ 283
	pointillism_point 48, 5, 5, 2, 0 @ 284
	pointillism_point 18, 42, 5, 1, 1 @ 285
	pointillism_point 57, 34, 4, 0, 0 @ 286
	pointillism_point 21, 52, 3, 2, 0 @ 287
	pointillism_point 28, 1, 2, 2, 1 @ 288
	pointillism_point 32, 22, 4, 1, 0 @ 289
	pointillism_point 19, 4, 3, 0, 0 @ 290
	pointillism_point 30, 19, 2, 0, 0 @ 291
	pointillism_point 37, 51, 2, 2, 1 @ 292
	pointillism_point 57, 3, 6, 0, 1 @ 293
	pointillism_point 63, 54, 3, 0, 0 @ 294
	pointillism_point 20, 35, 2, 0, 0 @ 295
	pointillism_point 47, 30, 3, 3, 1 @ 296
	pointillism_point 31, 23, 5, 2, 0 @ 297
	pointillism_point 2, 22, 6, 0, 1 @ 298
	pointillism_point 32, 24, 6, 0, 0 @ 299
	pointillism_point 46, 24, 6, 3, 1 @ 300
	pointillism_point 59, 14, 6, 0, 0 @ 301
	pointillism_point 16, 57, 4, 2, 0 @ 302
	pointillism_point 38, 57, 3, 3, 0 @ 303
	pointillism_point 48, 38, 5, 3, 0 @ 304
	pointillism_point 18, 1, 2, 2, 0 @ 305
	pointillism_point 55, 42, 5, 3, 0 @ 306
	pointillism_point 33, 6, 3, 2, 1 @ 307
	pointillism_point 42, 22, 6, 1, 0 @ 308
	pointillism_point 9, 56, 3, 2, 0 @ 309
	pointillism_point 7, 34, 2, 3, 1 @ 310
	pointillism_point 59, 45, 2, 2, 1 @ 311
	pointillism_point 7, 30, 5, 3, 0 @ 312
	pointillism_point 27, 46, 3, 2, 1 @ 313
	pointillism_point 4, 9, 6, 0, 0 @ 314
	pointillism_point 48, 45, 6, 3, 1 @ 315
	pointillism_point 45, 52, 4, 2, 0 @ 316
	pointillism_point 24, 36, 4, 2, 1 @ 317
	pointillism_point 14, 45, 4, 3, 0 @ 318
	pointillism_point 35, 10, 2, 3, 0 @ 319
	pointillism_point 18, 45, 2, 0, 1 @ 320
	pointillism_point 33, 40, 5, 3, 0 @ 321
	pointillism_point 15, 1, 4, 0, 1 @ 322
	pointillism_point 1, 49, 2, 1, 0 @ 323
	pointillism_point 63, 27, 3, 3, 0 @ 324
	pointillism_point 33, 37, 5, 1, 1 @ 325
	pointillism_point 38, 24, 2, 1, 1 @ 326
	pointillism_point 21, 45, 6, 2, 0 @ 327
	pointillism_point 35, 33, 6, 3, 0 @ 328
	pointillism_point 14, 46, 3, 2, 0 @ 329
	pointillism_point 20, 34, 3, 2, 0 @ 330
	pointillism_point 44, 11, 5, 0, 0 @ 331
	pointillism_point 26, 24, 4, 0, 1 @ 332
	pointillism_point 33, 7, 3, 1, 0 @ 333
	pointillism_point 36, 38, 5, 0, 1 @ 334
	pointillism_point 43, 10, 6, 2, 0 @ 335
	pointillism_point 62, 39, 6, 1, 1 @ 336
	pointillism_point 18, 52, 3, 1, 1 @ 337
	pointillism_point 31, 1, 5, 1, 0 @ 338
	pointillism_point 46, 6, 4, 1, 1 @ 339
	pointillism_point 47, 31, 2, 2, 0 @ 340
	pointillism_point 24, 6, 4, 3, 0 @ 341
	pointillism_point 49, 31, 5, 1, 1 @ 342
	pointillism_point 34, 38, 5, 3, 0 @ 343
	pointillism_point 30, 21, 2, 3, 0 @ 344
	pointillism_point 32, 34, 5, 0, 0 @ 345
	pointillism_point 21, 55, 2, 1, 0 @ 346
	pointillism_point 37, 4, 5, 2, 0 @ 347
	pointillism_point 31, 4, 5, 3, 0 @ 348
	pointillism_point 12, 19, 3, 0, 0 @ 349
	pointillism_point 7, 11, 6, 3, 0 @ 350
	pointillism_point 29, 28, 5, 1, 0 @ 351
	pointillism_point 48, 34, 3, 2, 0 @ 352
	pointillism_point 46, 18, 5, 3, 1 @ 353
	pointillism_point 43, 33, 3, 3, 0 @ 354
	pointillism_point 22, 56, 6, 0, 0 @ 355
	pointillism_point 4, 2, 2, 3, 0 @ 356
	pointillism_point 5, 20, 4, 0, 0 @ 357
	pointillism_point 56, 60, 6, 1, 1 @ 358
	pointillism_point 33, 27, 5, 3, 1 @ 359
	pointillism_point 20, 42, 4, 3, 1 @ 360
	pointillism_point 56, 20, 3, 1, 1 @ 361
	pointillism_point 43, 31, 5, 1, 1 @ 362
	pointillism_point 41, 43, 4, 2, 1 @ 363
	pointillism_point 39, 54, 4, 0, 1 @ 364
	pointillism_point 17, 34, 3, 1, 1 @ 365
	pointillism_point 41, 3, 3, 1, 1 @ 366
	pointillism_point 24, 36, 5, 0, 0 @ 367
	pointillism_point 33, 45, 6, 3, 0 @ 368
	pointillism_point 60, 44, 4, 2, 0 @ 369
	pointillism_point 51, 23, 3, 3, 1 @ 370
	pointillism_point 42, 58, 4, 0, 1 @ 371
	pointillism_point 10, 35, 6, 3, 1 @ 372
	pointillism_point 0, 11, 4, 0, 1 @ 373
	pointillism_point 17, 56, 3, 0, 1 @ 374
	pointillism_point 15, 14, 3, 2, 0 @ 375
	pointillism_point 31, 15, 6, 3, 1 @ 376
	pointillism_point 60, 16, 6, 3, 1 @ 377
	pointillism_point 56, 49, 6, 2, 1 @ 378
	pointillism_point 7, 21, 5, 0, 0 @ 379
	pointillism_point 30, 46, 3, 0, 1 @ 380
	pointillism_point 38, 16, 6, 1, 1 @ 381
	pointillism_point 61, 53, 5, 3, 1 @ 382
	pointillism_point 58, 4, 6, 2, 0 @ 383
	pointillism_point 13, 24, 3, 1, 0 @ 384
	pointillism_point 1, 45, 2, 2, 1 @ 385
	pointillism_point 61, 26, 2, 3, 1 @ 386
	pointillism_point 23, 63, 6, 1, 0 @ 387
	pointillism_point 11, 33, 2, 0, 1 @ 388
	pointillism_point 30, 38, 5, 1, 1 @ 389
	pointillism_point 13, 25, 4, 2, 0 @ 390
	pointillism_point 46, 4, 3, 1, 1 @ 391
	pointillism_point 27, 51, 4, 0, 0 @ 392
	pointillism_point 21, 33, 3, 2, 1 @ 393
	pointillism_point 31, 4, 4, 0, 1 @ 394
	pointillism_point 15, 18, 3, 3, 1 @ 395
	pointillism_point 45, 42, 6, 1, 0 @ 396
	pointillism_point 3, 55, 3, 3, 1 @ 397
	pointillism_point 53, 7, 4, 3, 1 @ 398
	pointillism_point 36, 31, 6, 0, 1 @ 399
	pointillism_point 47, 48, 2, 2, 1 @ 400
	pointillism_point 6, 0, 4, 2, 0 @ 401
	pointillism_point 11, 34, 3, 1, 0 @ 402
	pointillism_point 12, 59, 5, 0, 1 @ 403
	pointillism_point 20, 26, 2, 3, 1 @ 404
	pointillism_point 55, 32, 4, 2, 1 @ 405
	pointillism_point 63, 38, 6, 3, 1 @ 406
	pointillism_point 58, 62, 2, 0, 0 @ 407
	pointillism_point 34, 4, 2, 0, 1 @ 408
	pointillism_point 40, 18, 3, 2, 0 @ 409
	pointillism_point 3, 46, 5, 3, 0 @ 410
	pointillism_point 14, 56, 5, 0, 0 @ 411
	pointillism_point 1, 41, 4, 1, 0 @ 412
	pointillism_point 30, 51, 3, 0, 1 @ 413
	pointillism_point 6, 33, 4, 3, 1 @ 414
	pointillism_point 51, 25, 3, 1, 0 @ 415
	pointillism_point 2, 5, 2, 3, 1 @ 416
	pointillism_point 17, 17, 5, 2, 0 @ 417
	pointillism_point 31, 38, 3, 3, 0 @ 418
	pointillism_point 57, 31, 5, 0, 0 @ 419
	pointillism_point 46, 47, 2, 1, 0 @ 420
	pointillism_point 34, 52, 2, 1, 1 @ 421
	pointillism_point 59, 38, 5, 3, 1 @ 422
	pointillism_point 52, 0, 2, 2, 0 @ 423
	pointillism_point 16, 49, 2, 0, 1 @ 424
	pointillism_point 29, 45, 5, 1, 0 @ 425
	pointillism_point 8, 8, 6, 3, 1 @ 426
	pointillism_point 21, 24, 6, 2, 0 @ 427
	pointillism_point 4, 43, 4, 2, 0 @ 428
	pointillism_point 47, 30, 4, 3, 1 @ 429
	pointillism_point 34, 42, 4, 2, 0 @ 430
	pointillism_point 7, 20, 4, 2, 1 @ 431
	pointillism_point 1, 39, 3, 0, 1 @ 432
	pointillism_point 41, 10, 5, 0, 1 @ 433
	pointillism_point 61, 28, 5, 3, 1 @ 434
	pointillism_point 13, 31, 3, 2, 0 @ 435
	pointillism_point 36, 61, 6, 1, 0 @ 436
	pointillism_point 54, 29, 4, 2, 0 @ 437
	pointillism_point 20, 33, 2, 3, 0 @ 438
	pointillism_point 26, 13, 5, 0, 1 @ 439
	pointillism_point 63, 43, 5, 1, 0 @ 440
	pointillism_point 26, 62, 6, 2, 1 @ 441
	pointillism_point 17, 40, 3, 0, 0 @ 442
	pointillism_point 50, 5, 2, 2, 1 @ 443
	pointillism_point 33, 46, 6, 2, 0 @ 444
	pointillism_point 45, 20, 5, 1, 0 @ 445
	pointillism_point 60, 8, 6, 3, 1 @ 446
	pointillism_point 63, 52, 3, 3, 0 @ 447
	pointillism_point 39, 36, 3, 2, 0 @ 448
	pointillism_point 22, 22, 6, 1, 1 @ 449
	pointillism_point 41, 59, 3, 0, 1 @ 450
	pointillism_point 54, 47, 3, 2, 0 @ 451
	pointillism_point 3, 37, 5, 2, 0 @ 452
	pointillism_point 11, 22, 6, 3, 0 @ 453
	pointillism_point 28, 29, 3, 1, 1 @ 454
	pointillism_point 44, 39, 3, 1, 1 @ 455
	pointillism_point 11, 31, 5, 1, 1 @ 456
	pointillism_point 8, 16, 4, 3, 1 @ 457
	pointillism_point 63, 37, 5, 3, 1 @ 458
	pointillism_point 51, 19, 3, 3, 1 @ 459
	pointillism_point 4, 49, 6, 3, 1 @ 460
	pointillism_point 14, 47, 2, 1, 0 @ 461
	pointillism_point 8, 35, 4, 0, 0 @ 462
	pointillism_point 58, 26, 3, 3, 0 @ 463
	pointillism_point 47, 11, 3, 3, 1 @ 464
	pointillism_point 30, 32, 3, 0, 1 @ 465
	pointillism_point 35, 59, 2, 2, 0 @ 466
	pointillism_point 37, 0, 4, 3, 1 @ 467
	pointillism_point 20, 4, 4, 2, 1 @ 468
	pointillism_point 54, 26, 5, 1, 1 @ 469
	pointillism_point 39, 33, 2, 2, 1 @ 470
	pointillism_point 40, 19, 5, 2, 0 @ 471
	pointillism_point 14, 60, 6, 2, 1 @ 472
	pointillism_point 12, 45, 5, 1, 1 @ 473
	pointillism_point 55, 22, 2, 2, 1 @ 474
	pointillism_point 41, 21, 3, 2, 1 @ 475
	pointillism_point 23, 52, 6, 3, 0 @ 476
	pointillism_point 9, 10, 6, 0, 1 @ 477
	pointillism_point 55, 34, 5, 0, 0 @ 478
	pointillism_point 23, 43, 6, 2, 1 @ 479
	pointillism_point 20, 43, 2, 1, 0 @ 480
	pointillism_point 8, 19, 3, 3, 1 @ 481
	pointillism_point 49, 19, 5, 0, 0 @ 482
	pointillism_point 6, 7, 6, 2, 1 @ 483
	pointillism_point 35, 58, 5, 0, 1 @ 484
	pointillism_point 15, 36, 5, 3, 0 @ 485
	pointillism_point 7, 53, 4, 3, 0 @ 486
	pointillism_point 14, 18, 2, 2, 1 @ 487
	pointillism_point 35, 51, 5, 2, 0 @ 488
	pointillism_point 14, 33, 4, 3, 0 @ 489
	pointillism_point 28, 18, 4, 2, 1 @ 490
	pointillism_point 35, 29, 5, 3, 1 @ 491
	pointillism_point 4, 53, 6, 1, 1 @ 492
	pointillism_point 22, 1, 4, 2, 0 @ 493
	pointillism_point 61, 44, 5, 3, 0 @ 494
	pointillism_point 53, 10, 4, 2, 1 @ 495
	pointillism_point 17, 19, 4, 2, 1 @ 496
	pointillism_point 27, 27, 2, 2, 1 @ 497
	pointillism_point 21, 57, 2, 0, 0 @ 498
	pointillism_point 11, 53, 4, 2, 0 @ 499
	pointillism_point 58, 39, 6, 0, 0 @ 500
	pointillism_point 46, 47, 2, 2, 1 @ 501
	pointillism_point 16, 31, 6, 2, 1 @ 502
	pointillism_point 27, 40, 6, 2, 1 @ 503
	pointillism_point 38, 48, 6, 3, 1 @ 504
	pointillism_point 52, 55, 5, 1, 1 @ 505
	pointillism_point 15, 48, 5, 0, 1 @ 506
	pointillism_point 46, 63, 5, 1, 1 @ 507
	pointillism_point 56, 52, 5, 1, 1 @ 508
	pointillism_point 43, 47, 4, 2, 1 @ 509
	pointillism_point 13, 40, 5, 1, 0 @ 510
	pointillism_point 51, 24, 2, 0, 0 @ 511
	pointillism_point 33, 18, 2, 0, 1 @ 512
	pointillism_point 31, 34, 6, 2, 0 @ 513
	pointillism_point 17, 37, 4, 1, 1 @ 514
	pointillism_point 33, 63, 2, 0, 1 @ 515
	pointillism_point 38, 39, 4, 2, 1 @ 516
	pointillism_point 40, 54, 2, 1, 0 @ 517
	pointillism_point 21, 38, 6, 1, 0 @ 518
	pointillism_point 17, 24, 4, 2, 0 @ 519
	pointillism_point 50, 37, 6, 3, 1 @ 520
	pointillism_point 39, 58, 6, 1, 1 @ 521
	pointillism_point 53, 7, 3, 2, 0 @ 522
	pointillism_point 26, 14, 5, 1, 0 @ 523
	pointillism_point 30, 47, 3, 3, 1 @ 524
	pointillism_point 0, 46, 4, 0, 1 @ 525
	pointillism_point 27, 60, 2, 2, 0 @ 526
	pointillism_point 47, 58, 5, 3, 1 @ 527
	pointillism_point 62, 56, 2, 2, 1 @ 528
	pointillism_point 26, 19, 5, 3, 1 @ 529
	pointillism_point 41, 13, 5, 3, 1 @ 530
	pointillism_point 55, 23, 3, 0, 0 @ 531
	pointillism_point 48, 28, 6, 2, 1 @ 532
	pointillism_point 21, 52, 2, 2, 0 @ 533
	pointillism_point 40, 17, 5, 2, 0 @ 534
	pointillism_point 44, 37, 5, 1, 0 @ 535
	pointillism_point 32, 63, 5, 0, 0 @ 536
	pointillism_point 12, 52, 3, 1, 1 @ 537
	pointillism_point 48, 46, 4, 2, 1 @ 538
	pointillism_point 55, 28, 4, 2, 0 @ 539
	pointillism_point 31, 37, 4, 3, 0 @ 540
	pointillism_point 12, 25, 6, 2, 0 @ 541
	pointillism_point 24, 16, 6, 2, 1 @ 542
	pointillism_point 10, 19, 2, 0, 1 @ 543
	pointillism_point 37, 19, 4, 0, 0 @ 544
	pointillism_point 19, 25, 2, 0, 1 @ 545
	pointillism_point 32, 40, 3, 2, 1 @ 546
	pointillism_point 62, 48, 3, 1, 1 @ 547
	pointillism_point 35, 36, 4, 0, 1 @ 548
	pointillism_point 13, 35, 4, 1, 1 @ 549
	pointillism_point 29, 40, 5, 3, 0 @ 550
	pointillism_point 45, 18, 3, 3, 1 @ 551
	pointillism_point 14, 46, 5, 1, 1 @ 552
	pointillism_point 11, 49, 6, 1, 0 @ 553
	pointillism_point 36, 60, 5, 2, 0 @ 554
	pointillism_point 19, 60, 2, 1, 0 @ 555
	pointillism_point 40, 22, 5, 1, 0 @ 556
	pointillism_point 5, 12, 6, 1, 0 @ 557
	pointillism_point 57, 11, 6, 1, 0 @ 558
	pointillism_point 33, 4, 2, 2, 0 @ 559
	pointillism_point 16, 49, 6, 1, 0 @ 560
	pointillism_point 18, 31, 4, 1, 1 @ 561
	pointillism_point 57, 46, 5, 3, 0 @ 562
	pointillism_point 34, 61, 4, 3, 1 @ 563
	pointillism_point 12, 30, 3, 0, 0 @ 564
	pointillism_point 37, 0, 2, 3, 1 @ 565
	pointillism_point 6, 49, 2, 2, 0 @ 566
	pointillism_point 19, 33, 3, 1, 0 @ 567
	pointillism_point 20, 32, 6, 2, 1 @ 568
	pointillism_point 10, 59, 4, 2, 1 @ 569
	pointillism_point 51, 8, 5, 0, 0 @ 570
	pointillism_point 61, 2, 6, 1, 1 @ 571
	pointillism_point 35, 0, 2, 1, 1 @ 572
	pointillism_point 34, 33, 5, 0, 0 @ 573
	pointillism_point 48, 20, 5, 3, 0 @ 574
	pointillism_point 20, 50, 6, 3, 0 @ 575
	pointillism_point 57, 35, 3, 3, 0 @ 576
	pointillism_point 28, 17, 6, 0, 0 @ 577
	pointillism_point 55, 22, 6, 0, 0 @ 578
	pointillism_point 21, 49, 3, 3, 1 @ 579
	pointillism_point 52, 40, 5, 2, 0 @ 580
	pointillism_point 53, 5, 5, 0, 1 @ 581
	pointillism_point 55, 51, 5, 1, 0 @ 582
	pointillism_point 28, 23, 5, 3, 0 @ 583
	pointillism_point 16, 6, 2, 3, 0 @ 584
	pointillism_point 50, 31, 5, 3, 1 @ 585
	pointillism_point 0, 41, 3, 3, 0 @ 586
	pointillism_point 4, 1, 2, 3, 0 @ 587
	pointillism_point 59, 35, 3, 3, 0 @ 588
	pointillism_point 27, 52, 5, 1, 0 @ 589
	pointillism_point 48, 17, 5, 1, 1 @ 590
	pointillism_point 3, 0, 3, 3, 1 @ 591
	pointillism_point 29, 55, 3, 1, 0 @ 592
	pointillism_point 58, 24, 4, 2, 1 @ 593
	pointillism_point 28, 22, 5, 2, 0 @ 594
	pointillism_point 4, 63, 6, 1, 1 @ 595
	pointillism_point 38, 35, 5, 2, 1 @ 596
	pointillism_point 21, 44, 4, 3, 1 @ 597
	pointillism_point 2, 53, 4, 3, 1 @ 598
	pointillism_point 7, 53, 6, 1, 1 @ 599
	pointillism_point 26, 12, 2, 0, 0 @ 600
	pointillism_point 40, 38, 5, 2, 0 @ 601
	pointillism_point 47, 54, 2, 3, 0 @ 602
	pointillism_point 55, 11, 4, 3, 1 @ 603
	pointillism_point 27, 61, 3, 0, 0 @ 604
	pointillism_point 39, 31, 4, 0, 0 @ 605
	pointillism_point 43, 42, 6, 1, 1 @ 606
	pointillism_point 11, 15, 4, 0, 0 @ 607
	pointillism_point 53, 60, 5, 3, 1 @ 608
	pointillism_point 51, 33, 2, 2, 1 @ 609
	pointillism_point 45, 38, 6, 2, 0 @ 610
	pointillism_point 31, 26, 4, 0, 1 @ 611
	pointillism_point 47, 44, 5, 1, 0 @ 612
	pointillism_point 26, 50, 3, 1, 0 @ 613
	pointillism_point 59, 63, 4, 0, 1 @ 614
	pointillism_point 19, 63, 2, 1, 1 @ 615
	pointillism_point 15, 36, 4, 1, 0 @ 616
	pointillism_point 20, 27, 2, 0, 0 @ 617
	pointillism_point 33, 6, 5, 0, 0 @ 618
	pointillism_point 37, 52, 2, 0, 0 @ 619
	pointillism_point 46, 14, 2, 2, 0 @ 620
	pointillism_point 60, 62, 4, 2, 1 @ 621
	pointillism_point 22, 6, 6, 0, 0 @ 622
	pointillism_point 11, 4, 3, 3, 1 @ 623
	pointillism_point 62, 2, 4, 2, 0 @ 624
	pointillism_point 12, 23, 4, 2, 1 @ 625
	pointillism_point 43, 60, 5, 2, 1 @ 626
	pointillism_point 21, 54, 6, 1, 1 @ 627
	pointillism_point 24, 35, 5, 1, 0 @ 628
	pointillism_point 29, 16, 5, 1, 0 @ 629
	pointillism_point 53, 23, 5, 0, 0 @ 630
	pointillism_point 0, 55, 4, 2, 0 @ 631
	pointillism_point 10, 59, 2, 2, 1 @ 632
	pointillism_point 29, 11, 3, 3, 1 @ 633
	pointillism_point 60, 49, 4, 2, 1 @ 634
	pointillism_point 29, 15, 3, 2, 1 @ 635
	pointillism_point 32, 19, 6, 2, 0 @ 636
	pointillism_point 17, 43, 5, 3, 0 @ 637
	pointillism_point 35, 12, 5, 3, 0 @ 638
	pointillism_point 36, 2, 2, 2, 0 @ 639
	pointillism_point 49, 22, 3, 0, 1 @ 640
	pointillism_point 14, 35, 6, 2, 1 @ 641
	pointillism_point 26, 16, 2, 3, 0 @ 642
	pointillism_point 20, 4, 3, 0, 1 @ 643
	pointillism_point 45, 39, 6, 3, 1 @ 644
	pointillism_point 51, 2, 6, 0, 1 @ 645
	pointillism_point 2, 4, 2, 3, 0 @ 646
	pointillism_point 13, 34, 4, 2, 1 @ 647
	pointillism_point 37, 0, 2, 3, 0 @ 648
	pointillism_point 42, 63, 4, 3, 0 @ 649
	pointillism_point 32, 12, 2, 1, 0 @ 650
	pointillism_point 47, 46, 6, 2, 1 @ 651
	pointillism_point 27, 13, 4, 1, 0 @ 652
	pointillism_point 30, 1, 6, 2, 0 @ 653
	pointillism_point 5, 34, 4, 0, 1 @ 654
	pointillism_point 52, 42, 6, 1, 0 @ 655
	pointillism_point 11, 9, 3, 2, 1 @ 656
	pointillism_point 63, 50, 5, 3, 1 @ 657
	pointillism_point 61, 24, 5, 2, 1 @ 658
	pointillism_point 11, 56, 6, 3, 0 @ 659
	pointillism_point 57, 23, 5, 0, 0 @ 660
	pointillism_point 52, 4, 4, 2, 0 @ 661
	pointillism_point 54, 14, 5, 1, 0 @ 662
	pointillism_point 56, 1, 2, 2, 0 @ 663
	pointillism_point 60, 36, 4, 1, 0 @ 664
	pointillism_point 33, 3, 3, 0, 0 @ 665
	pointillism_point 50, 47, 2, 1, 0 @ 666
	pointillism_point 41, 36, 6, 0, 1 @ 667
	pointillism_point 10, 59, 2, 1, 0 @ 668
	pointillism_point 26, 28, 4, 0, 0 @ 669
	pointillism_point 48, 49, 3, 1, 1 @ 670
	pointillism_point 26, 33, 2, 0, 0 @ 671
	pointillism_point 5, 41, 2, 0, 0 @ 672
	pointillism_point 38, 45, 2, 1, 1 @ 673
	pointillism_point 22, 12, 3, 2, 1 @ 674
	pointillism_point 43, 6, 3, 1, 1 @ 675
	pointillism_point 6, 18, 2, 2, 0 @ 676
	pointillism_point 56, 15, 6, 2, 1 @ 677
	pointillism_point 35, 58, 5, 2, 0 @ 678
	pointillism_point 0, 25, 6, 1, 1 @ 679
	pointillism_point 41, 20, 5, 2, 1 @ 680
	pointillism_point 42, 33, 5, 0, 1 @ 681
	pointillism_point 20, 49, 2, 2, 0 @ 682
	pointillism_point 26, 6, 3, 3, 0 @ 683
	pointillism_point 24, 27, 5, 0, 0 @ 684
	pointillism_point 59, 22, 5, 0, 1 @ 685
	pointillism_point 21, 30, 2, 1, 0 @ 686
	pointillism_point 52, 10, 2, 2, 0 @ 687
	pointillism_point 27, 5, 4, 3, 1 @ 688
	pointillism_point 11, 1, 4, 3, 0 @ 689
	pointillism_point 42, 34, 6, 2, 1 @ 690
	pointillism_point 33, 32, 3, 0, 0 @ 691
	pointillism_point 32, 55, 2, 3, 1 @ 692
	pointillism_point 20, 31, 2, 0, 1 @ 693
	pointillism_point 29, 17, 4, 2, 1 @ 694
	pointillism_point 36, 43, 5, 3, 1 @ 695
	pointillism_point 7, 63, 3, 3, 1 @ 696
	pointillism_point 44, 37, 4, 2, 1 @ 697
	pointillism_point 42, 41, 3, 0, 0 @ 698
	pointillism_point 17, 36, 5, 0, 0 @ 699
	pointillism_point 49, 44, 5, 1, 0 @ 700
	pointillism_point 57, 11, 4, 3, 0 @ 701
	pointillism_point 40, 16, 4, 3, 0 @ 702
	pointillism_point 34, 6, 2, 3, 0 @ 703
	pointillism_point 9, 44, 2, 1, 1 @ 704
	pointillism_point 52, 25, 2, 2, 1 @ 705
	pointillism_point 58, 18, 4, 0, 1 @ 706
	pointillism_point 29, 56, 4, 1, 1 @ 707
	pointillism_point 18, 37, 4, 2, 0 @ 708
	pointillism_point 33, 48, 2, 1, 0 @ 709
	pointillism_point 55, 26, 2, 1, 0 @ 710
	pointillism_point 36, 59, 4, 2, 1 @ 711
	pointillism_point 50, 21, 4, 1, 1 @ 712
	pointillism_point 13, 26, 2, 0, 0 @ 713
	pointillism_point 22, 46, 4, 3, 0 @ 714
	pointillism_point 29, 20, 2, 3, 0 @ 715
	pointillism_point 62, 46, 3, 3, 1 @ 716
	pointillism_point 10, 22, 2, 0, 0 @ 717
	pointillism_point 29, 48, 5, 1, 1 @ 718
	pointillism_point 4, 58, 3, 0, 1 @ 719
	pointillism_point 8, 45, 5, 3, 0 @ 720
	pointillism_point 40, 30, 6, 1, 1 @ 721
	pointillism_point 10, 18, 5, 3, 0 @ 722
	pointillism_point 13, 3, 5, 3, 1 @ 723
	pointillism_point 38, 58, 3, 3, 0 @ 724
	pointillism_point 53, 59, 5, 1, 0 @ 725
	pointillism_point 3, 26, 3, 0, 0 @ 726
	pointillism_point 63, 11, 4, 3, 1 @ 727
	pointillism_point 4, 5, 6, 2, 0 @ 728
	pointillism_point 54, 11, 4, 3, 1 @ 729
	pointillism_point 59, 23, 2, 0, 1 @ 730
	pointillism_point 13, 39, 4, 3, 0 @ 731
	pointillism_point 44, 31, 4, 0, 0 @ 732
	pointillism_point 38, 16, 4, 0, 0 @ 733
	pointillism_point 37, 35, 5, 2, 1 @ 734
	pointillism_point 55, 9, 2, 1, 1 @ 735
	pointillism_point 20, 23, 5, 2, 1 @ 736
	pointillism_point 46, 61, 4, 1, 1 @ 737
	pointillism_point 29, 26, 3, 3, 1 @ 738
	pointillism_point 33, 51, 5, 3, 0 @ 739
	pointillism_point 40, 23, 2, 1, 1 @ 740
	pointillism_point 38, 60, 6, 3, 0 @ 741
	pointillism_point 20, 26, 6, 1, 1 @ 742
	pointillism_point 50, 32, 5, 1, 1 @ 743
	pointillism_point 25, 62, 4, 0, 0 @ 744
	pointillism_point 12, 2, 5, 2, 1 @ 745
	pointillism_point 60, 60, 5, 1, 0 @ 746
	pointillism_point 48, 48, 5, 0, 0 @ 747
	pointillism_point 37, 63, 3, 3, 0 @ 748
	pointillism_point 3, 23, 3, 3, 0 @ 749
	pointillism_point 53, 17, 3, 2, 0 @ 750
	pointillism_point 27, 20, 5, 1, 0 @ 751
	pointillism_point 40, 58, 4, 1, 1 @ 752
	pointillism_point 14, 31, 2, 1, 0 @ 753
	pointillism_point 54, 33, 4, 0, 0 @ 754
	pointillism_point 7, 59, 2, 0, 0 @ 755
	pointillism_point 35, 25, 6, 2, 0 @ 756
	pointillism_point 13, 46, 3, 0, 0 @ 757
	pointillism_point 63, 32, 4, 2, 1 @ 758
	pointillism_point 62, 59, 2, 2, 1 @ 759
	pointillism_point 11, 46, 2, 1, 0 @ 760
	pointillism_point 55, 11, 4, 1, 1 @ 761
	pointillism_point 61, 50, 3, 3, 1 @ 762
	pointillism_point 22, 3, 4, 3, 1 @ 763
	pointillism_point 20, 12, 4, 0, 1 @ 764
	pointillism_point 24, 3, 6, 0, 0 @ 765
	pointillism_point 62, 33, 2, 1, 1 @ 766
	pointillism_point 15, 0, 6, 1, 0 @ 767
	pointillism_point 63, 35, 2, 3, 0 @ 768
	pointillism_point 14, 49, 3, 2, 1 @ 769
	pointillism_point 24, 28, 3, 2, 1 @ 770
	pointillism_point 48, 14, 3, 3, 0 @ 771
	pointillism_point 33, 32, 4, 1, 1 @ 772
	pointillism_point 63, 12, 3, 3, 0 @ 773
	pointillism_point 20, 51, 4, 1, 0 @ 774
	pointillism_point 34, 33, 2, 2, 1 @ 775
	pointillism_point 54, 5, 3, 3, 0 @ 776
	pointillism_point 29, 49, 2, 2, 0 @ 777
	pointillism_point 32, 17, 6, 3, 1 @ 778
	pointillism_point 13, 51, 3, 0, 1 @ 779
	pointillism_point 37, 5, 6, 3, 0 @ 780
	pointillism_point 30, 49, 4, 0, 0 @ 781
	pointillism_point 53, 58, 5, 3, 1 @ 782
	pointillism_point 50, 47, 6, 0, 0 @ 783
	pointillism_point 20, 35, 5, 2, 1 @ 784
	pointillism_point 53, 30, 5, 0, 1 @ 785
	pointillism_point 5, 5, 3, 1, 1 @ 786
	pointillism_point 9, 31, 4, 3, 0 @ 787
	pointillism_point 47, 11, 2, 2, 1 @ 788
	pointillism_point 21, 17, 2, 1, 1 @ 789
	pointillism_point 41, 27, 3, 0, 0 @ 790
	pointillism_point 28, 19, 6, 2, 1 @ 791
	pointillism_point 52, 49, 4, 1, 1 @ 792
	pointillism_point 39, 63, 5, 3, 1 @ 793
	pointillism_point 9, 48, 3, 0, 1 @ 794
	pointillism_point 35, 18, 6, 2, 0 @ 795
	pointillism_point 2, 42, 4, 0, 1 @ 796
	pointillism_point 9, 60, 3, 2, 1 @ 797
	pointillism_point 12, 2, 2, 0, 0 @ 798
	pointillism_point 34, 5, 2, 3, 1 @ 799
	pointillism_point 34, 8, 3, 1, 1 @ 800
	pointillism_point 10, 15, 2, 2, 1 @ 801
	pointillism_point 2, 17, 2, 1, 1 @ 802
	pointillism_point 1, 33, 4, 1, 0 @ 803
	pointillism_point 22, 57, 6, 1, 1 @ 804
	pointillism_point 36, 56, 6, 2, 0 @ 805
	pointillism_point 15, 30, 5, 1, 1 @ 806
	pointillism_point 43, 21, 2, 2, 1 @ 807
	pointillism_point 32, 34, 5, 3, 0 @ 808
	pointillism_point 58, 63, 6, 0, 1 @ 809
	pointillism_point 26, 39, 5, 1, 1 @ 810
	pointillism_point 41, 52, 2, 2, 0 @ 811
	pointillism_point 22, 57, 5, 3, 1 @ 812
	pointillism_point 19, 62, 2, 3, 0 @ 813
	pointillism_point 54, 33, 6, 0, 0 @ 814
	pointillism_point 0, 36, 5, 1, 1 @ 815
	pointillism_point 36, 33, 6, 0, 0 @ 816
	pointillism_point 21, 49, 2, 1, 1 @ 817
	pointillism_point 16, 55, 4, 2, 0 @ 818
	pointillism_point 8, 7, 4, 1, 1 @ 819
	pointillism_point 33, 9, 4, 2, 1 @ 820
	pointillism_point 5, 60, 6, 1, 0 @ 821
	pointillism_point 25, 3, 4, 2, 1 @ 822
	pointillism_point 15, 41, 5, 1, 1 @ 823
	pointillism_point 22, 7, 2, 1, 1 @ 824
	pointillism_point 62, 61, 4, 2, 1 @ 825
	pointillism_point 54, 11, 5, 0, 0 @ 826
	pointillism_point 46, 43, 2, 3, 0 @ 827
	pointillism_point 12, 49, 2, 0, 1 @ 828
	pointillism_point 48, 19, 5, 2, 1 @ 829
	pointillism_point 38, 62, 6, 3, 1 @ 830
	pointillism_point 41, 47, 5, 3, 0 @ 831
	pointillism_point 21, 61, 2, 3, 1 @ 832
	pointillism_point 28, 46, 4, 0, 1 @ 833
	pointillism_point 51, 47, 2, 0, 0 @ 834
	pointillism_point 13, 5, 3, 2, 1 @ 835
	pointillism_point 28, 26, 2, 1, 0 @ 836
	pointillism_point 14, 24, 6, 3, 1 @ 837
	pointillism_point 27, 17, 2, 2, 0 @ 838
	pointillism_point 6, 20, 4, 0, 1 @ 839
	pointillism_point 49, 14, 4, 3, 1 @ 840
	pointillism_point 26, 3, 2, 0, 0 @ 841
	pointillism_point 0, 52, 6, 0, 1 @ 842
	pointillism_point 63, 11, 3, 2, 1 @ 843
	pointillism_point 15, 18, 3, 3, 1 @ 844
	pointillism_point 26, 21, 2, 0, 0 @ 845
	pointillism_point 15, 0, 4, 2, 0 @ 846
	pointillism_point 62, 10, 5, 1, 0 @ 847
	pointillism_point 48, 43, 4, 2, 0 @ 848
	pointillism_point 38, 49, 2, 0, 0 @ 849
	pointillism_point 45, 47, 5, 3, 1 @ 850
	pointillism_point 63, 12, 2, 1, 1 @ 851
	pointillism_point 18, 11, 2, 3, 0 @ 852
	pointillism_point 21, 7, 3, 3, 1 @ 853
	pointillism_point 40, 16, 6, 1, 0 @ 854
	pointillism_point 15, 23, 2, 2, 1 @ 855
	pointillism_point 11, 39, 6, 1, 1 @ 856
	pointillism_point 52, 29, 2, 0, 0 @ 857
	pointillism_point 28, 58, 2, 1, 0 @ 858
	pointillism_point 44, 39, 6, 3, 1 @ 859
	pointillism_point 10, 26, 6, 1, 0 @ 860
	pointillism_point 5, 31, 4, 0, 1 @ 861
	pointillism_point 36, 13, 3, 3, 1 @ 862
	pointillism_point 28, 23, 4, 2, 0 @ 863
	pointillism_point 47, 59, 6, 1, 0 @ 864
	pointillism_point 59, 37, 2, 0, 0 @ 865
	pointillism_point 3, 47, 4, 0, 1 @ 866
	pointillism_point 12, 16, 4, 1, 1 @ 867
	pointillism_point 14, 58, 5, 2, 0 @ 868
	pointillism_point 51, 3, 5, 2, 0 @ 869
	pointillism_point 18, 6, 3, 2, 0 @ 870
	pointillism_point 42, 55, 6, 0, 0 @ 871
	pointillism_point 63, 1, 3, 3, 0 @ 872
	pointillism_point 53, 22, 6, 3, 1 @ 873
	pointillism_point 44, 50, 6, 2, 1 @ 874
	pointillism_point 5, 17, 4, 1, 0 @ 875
	pointillism_point 41, 9, 4, 0, 0 @ 876
	pointillism_point 43, 13, 3, 3, 1 @ 877
	pointillism_point 24, 13, 4, 0, 0 @ 878
	pointillism_point 35, 57, 2, 3, 0 @ 879
	pointillism_point 15, 58, 3, 0, 0 @ 880
	pointillism_point 33, 53, 5, 1, 1 @ 881
	pointillism_point 54, 38, 5, 1, 1 @ 882
	pointillism_point 35, 5, 5, 3, 1 @ 883
	pointillism_point 27, 8, 2, 3, 1 @ 884
	pointillism_point 62, 9, 2, 3, 0 @ 885
	pointillism_point 45, 58, 6, 3, 1 @ 886
	pointillism_point 21, 53, 6, 2, 1 @ 887
	pointillism_point 41, 10, 2, 1, 0 @ 888
	pointillism_point 2, 57, 3, 3, 1 @ 889
	pointillism_point 20, 52, 6, 1, 1 @ 890
	pointillism_point 23, 29, 3, 0, 0 @ 891
	pointillism_point 22, 29, 3, 1, 0 @ 892
	pointillism_point 1, 57, 4, 1, 0 @ 893
	pointillism_point 30, 39, 6, 3, 0 @ 894
	pointillism_point 50, 20, 4, 3, 0 @ 895
	pointillism_point 10, 57, 6, 3, 0 @ 896
	pointillism_point 31, 13, 3, 3, 0 @ 897
	pointillism_point 11, 10, 3, 0, 1 @ 898
	pointillism_point 53, 29, 6, 2, 0 @ 899
	pointillism_point 3, 18, 2, 3, 0 @ 900
	pointillism_point 12, 19, 5, 3, 0 @ 901
	pointillism_point 12, 52, 3, 3, 0 @ 902
	pointillism_point 16, 20, 3, 3, 0 @ 903
	pointillism_point 35, 50, 4, 3, 1 @ 904
	pointillism_point 2, 16, 5, 0, 1 @ 905
	pointillism_point 53, 24, 6, 1, 1 @ 906
	pointillism_point 51, 29, 3, 1, 0 @ 907
	pointillism_point 60, 21, 4, 1, 1 @ 908
	pointillism_point 62, 63, 4, 1, 0 @ 909
	pointillism_point 42, 2, 5, 2, 0 @ 910
	pointillism_point 40, 10, 5, 3, 1 @ 911
	pointillism_point 26, 6, 6, 2, 1 @ 912
	pointillism_point 60, 23, 5, 1, 1 @ 913
	pointillism_point 3, 18, 2, 3, 1 @ 914
	pointillism_point 47, 10, 4, 3, 0 @ 915
	pointillism_point 18, 56, 2, 0, 1 @ 916
	pointillism_point 54, 27, 4, 1, 1 @ 917
	pointillism_point 1, 57, 6, 2, 1 @ 918
	pointillism_point 25, 25, 2, 3, 1 @ 919
	pointillism_point 9, 40, 4, 1, 0 @ 920
	pointillism_point 30, 39, 5, 2, 0 @ 921
	pointillism_point 53, 51, 5, 2, 0 @ 922
	pointillism_point 39, 37, 6, 0, 1 @ 923
	pointillism_point 6, 49, 5, 2, 1 @ 924
	pointillism_point 26, 57, 5, 0, 0 @ 925
	pointillism_point 45, 4, 3, 3, 0 @ 926
	pointillism_point 36, 62, 3, 2, 0 @ 927
	pointillism_point 60, 48, 3, 1, 1 @ 928
	pointillism_point 63, 62, 6, 3, 1 @ 929
	pointillism_point 34, 54, 2, 0, 1 @ 930
	pointillism_point 0, 1, 3, 2, 0 @ 931
	pointillism_point 18, 26, 2, 0, 0 @ 932
	pointillism_point 18, 30, 5, 2, 0 @ 933
	pointillism_point 31, 18, 5, 1, 0 @ 934
	pointillism_point 47, 6, 3, 0, 1 @ 935
	pointillism_point 53, 26, 3, 0, 0 @ 936
	pointillism_point 59, 9, 6, 3, 0 @ 937
	pointillism_point 52, 29, 2, 1, 1 @ 938
	pointillism_point 2, 7, 2, 0, 0 @ 939
	pointillism_point 32, 47, 3, 2, 1 @ 940
	pointillism_point 11, 3, 6, 1, 1 @ 941
	pointillism_point 28, 22, 6, 0, 1 @ 942
	pointillism_point 5, 19, 3, 1, 1 @ 943
	pointillism_point 41, 6, 2, 1, 1 @ 944
	pointillism_point 48, 45, 6, 3, 0 @ 945
	pointillism_point 42, 45, 5, 2, 0 @ 946
	pointillism_point 25, 52, 3, 2, 0 @ 947
	pointillism_point 15, 21, 2, 1, 0 @ 948
	pointillism_point 54, 21, 5, 2, 0 @ 949
	pointillism_point 58, 6, 3, 2, 0 @ 950
	pointillism_point 18, 29, 4, 3, 0 @ 951
	pointillism_point 3, 56, 3, 2, 1 @ 952
	pointillism_point 1, 1, 5, 2, 1 @ 953
	pointillism_point 23, 46, 2, 0, 0 @ 954
	pointillism_point 20, 23, 3, 2, 0 @ 955
	pointillism_point 52, 15, 5, 0, 0 @ 956
	pointillism_point 9, 55, 3, 1, 1 @ 957
	pointillism_point 40, 29, 4, 3, 0 @ 958
	pointillism_point 41, 45, 6, 3, 0 @ 959
	pointillism_point 30, 23, 5, 0, 0 @ 960
	pointillism_point 21, 15, 3, 2, 0 @ 961
	pointillism_point 32, 45, 2, 0, 0 @ 962
	pointillism_point 39, 22, 5, 3, 0 @ 963
	pointillism_point 20, 9, 2, 1, 0 @ 964
	pointillism_point 59, 61, 4, 0, 1 @ 965
	pointillism_point 37, 26, 5, 2, 0 @ 966
	pointillism_point 0, 34, 6, 3, 0 @ 967
	pointillism_point 13, 48, 2, 0, 0 @ 968
	pointillism_point 23, 25, 3, 1, 1 @ 969
	pointillism_point 0, 59, 4, 0, 1 @ 970
	pointillism_point 42, 40, 6, 2, 0 @ 971
	pointillism_point 45, 15, 2, 3, 0 @ 972
	pointillism_point 10, 48, 5, 0, 0 @ 973
	pointillism_point 6, 0, 4, 2, 1 @ 974
	pointillism_point 49, 46, 5, 1, 0 @ 975
	pointillism_point 20, 51, 5, 0, 0 @ 976
	pointillism_point 54, 16, 5, 3, 0 @ 977
	pointillism_point 5, 46, 3, 0, 1 @ 978
	pointillism_point 25, 26, 2, 2, 1 @ 979
	pointillism_point 44, 20, 2, 3, 1 @ 980
	pointillism_point 55, 15, 2, 1, 1 @ 981
	pointillism_point 50, 23, 3, 1, 1 @ 982
	pointillism_point 57, 24, 6, 1, 0 @ 983
	pointillism_point 46, 50, 3, 3, 0 @ 984
	pointillism_point 36, 29, 6, 0, 1 @ 985
	pointillism_point 18, 29, 5, 1, 1 @ 986
	pointillism_point 20, 12, 4, 3, 1 @ 987
	pointillism_point 54, 46, 6, 1, 0 @ 988
	pointillism_point 6, 10, 3, 1, 0 @ 989
	pointillism_point 40, 40, 4, 0, 0 @ 990
	pointillism_point 58, 58, 2, 3, 1 @ 991
	pointillism_point 8, 39, 6, 3, 0 @ 992
	pointillism_point 24, 26, 2, 0, 0 @ 993
	pointillism_point 30, 38, 3, 1, 1 @ 994
	pointillism_point 31, 51, 3, 3, 1 @ 995
	pointillism_point 33, 23, 5, 3, 1 @ 996
	pointillism_point 1, 8, 4, 0, 0 @ 997
	pointillism_point 53, 3, 3, 0, 1 @ 998
	pointillism_point 59, 2, 4, 0, 0 @ 999
	pointillism_point 2, 45, 4, 1, 1 @ 1000
	pointillism_point 14, 23, 6, 1, 0 @ 1001
	pointillism_point 49, 41, 2, 0, 1 @ 1002
	pointillism_point 34, 23, 4, 1, 0 @ 1003
	pointillism_point 58, 44, 4, 1, 1 @ 1004
	pointillism_point 52, 32, 3, 0, 0 @ 1005
	pointillism_point 0, 58, 4, 1, 0 @ 1006
	pointillism_point 37, 51, 4, 0, 1 @ 1007
	pointillism_point 51, 4, 4, 3, 1 @ 1008
	pointillism_point 4, 24, 6, 1, 0 @ 1009
	pointillism_point 44, 12, 5, 3, 1 @ 1010
	pointillism_point 40, 20, 5, 2, 0 @ 1011
	pointillism_point 63, 48, 5, 1, 1 @ 1012
	pointillism_point 48, 33, 3, 2, 1 @ 1013
	pointillism_point 1, 37, 6, 1, 0 @ 1014
	pointillism_point 5, 35, 6, 2, 0 @ 1015
	pointillism_point 36, 16, 6, 0, 0 @ 1016
	pointillism_point 61, 20, 3, 1, 1 @ 1017
	pointillism_point 63, 56, 5, 3, 1 @ 1018
	pointillism_point 34, 27, 6, 1, 0 @ 1019
	pointillism_point 37, 7, 6, 3, 1 @ 1020
	pointillism_point 10, 12, 3, 2, 1 @ 1021
	pointillism_point 3, 30, 3, 1, 0 @ 1022
	pointillism_point 15, 60, 2, 1, 0 @ 1023
	pointillism_point 17, 24, 3, 2, 1 @ 1024
	pointillism_point 0, 53, 5, 3, 1 @ 1025
	pointillism_point 50, 24, 2, 2, 0 @ 1026
	pointillism_point 35, 48, 3, 1, 1 @ 1027
	pointillism_point 17, 61, 2, 1, 0 @ 1028
	pointillism_point 26, 22, 6, 2, 1 @ 1029
	pointillism_point 40, 5, 4, 2, 0 @ 1030
	pointillism_point 23, 61, 6, 3, 1 @ 1031
	pointillism_point 46, 9, 5, 3, 0 @ 1032
	pointillism_point 24, 29, 2, 3, 1 @ 1033
	pointillism_point 32, 31, 3, 0, 0 @ 1034
	pointillism_point 35, 44, 5, 3, 1 @ 1035
	pointillism_point 32, 63, 2, 3, 0 @ 1036
	pointillism_point 63, 41, 5, 3, 0 @ 1037
	pointillism_point 35, 59, 5, 0, 1 @ 1038
	pointillism_point 24, 57, 2, 1, 1 @ 1039
	pointillism_point 30, 50, 6, 2, 1 @ 1040
	pointillism_point 20, 29, 5, 1, 0 @ 1041
	pointillism_point 53, 1, 3, 2, 1 @ 1042
	pointillism_point 62, 59, 3, 3, 0 @ 1043
	pointillism_point 34, 30, 2, 3, 0 @ 1044
	pointillism_point 24, 34, 2, 1, 0 @ 1045
	pointillism_point 62, 41, 6, 1, 1 @ 1046
	pointillism_point 47, 20, 3, 0, 1 @ 1047
	pointillism_point 59, 7, 2, 2, 1 @ 1048
	pointillism_point 6, 61, 5, 0, 1 @ 1049
	pointillism_point 53, 55, 4, 1, 1 @ 1050
	pointillism_point 52, 29, 5, 2, 1 @ 1051
	pointillism_point 24, 18, 3, 1, 1 @ 1052
	pointillism_point 11, 19, 4, 2, 0 @ 1053
	pointillism_point 19, 56, 3, 2, 0 @ 1054
	pointillism_point 31, 11, 3, 1, 1 @ 1055
	pointillism_point 19, 33, 3, 2, 0 @ 1056
	pointillism_point 6, 57, 6, 1, 0 @ 1057
	pointillism_point 55, 61, 4, 3, 0 @ 1058
	pointillism_point 41, 38, 2, 2, 1 @ 1059
	pointillism_point 60, 51, 4, 3, 1 @ 1060
	pointillism_point 0, 1, 5, 3, 0 @ 1061
	pointillism_point 21, 24, 6, 0, 1 @ 1062
	pointillism_point 13, 44, 2, 1, 1 @ 1063
	pointillism_point 39, 59, 4, 0, 0 @ 1064
	pointillism_point 45, 1, 4, 3, 0 @ 1065
	pointillism_point 35, 21, 6, 0, 0 @ 1066
	pointillism_point 36, 0, 2, 3, 1 @ 1067
	pointillism_point 55, 63, 6, 1, 1 @ 1068
	pointillism_point 37, 36, 6, 0, 1 @ 1069
	pointillism_point 6, 59, 6, 3, 1 @ 1070
	pointillism_point 3, 24, 3, 1, 0 @ 1071
	pointillism_point 44, 52, 2, 2, 0 @ 1072
	pointillism_point 29, 54, 3, 0, 0 @ 1073
	pointillism_point 58, 4, 4, 1, 1 @ 1074
	pointillism_point 18, 38, 2, 2, 1 @ 1075
	pointillism_point 43, 25, 3, 1, 0 @ 1076
	pointillism_point 41, 44, 6, 3, 0 @ 1077
	pointillism_point 1, 25, 3, 2, 1 @ 1078
	pointillism_point 47, 6, 5, 1, 1 @ 1079
	pointillism_point 12, 18, 4, 3, 0 @ 1080
	pointillism_point 54, 50, 3, 2, 1 @ 1081
	pointillism_point 13, 18, 5, 0, 0 @ 1082
	pointillism_point 3, 40, 2, 1, 1 @ 1083
	pointillism_point 41, 6, 2, 3, 1 @ 1084
	pointillism_point 3, 56, 4, 0, 1 @ 1085
	pointillism_point 48, 44, 2, 0, 0 @ 1086
	pointillism_point 34, 0, 5, 0, 0 @ 1087
	pointillism_point 36, 59, 3, 2, 0 @ 1088
	pointillism_point 32, 62, 2, 1, 1 @ 1089
	pointillism_point 2, 12, 3, 0, 1 @ 1090
	pointillism_point 41, 44, 3, 1, 0 @ 1091
	pointillism_point 57, 48, 4, 1, 0 @ 1092
	pointillism_point 42, 31, 4, 1, 0 @ 1093
	pointillism_point 20, 52, 5, 2, 0 @ 1094
	pointillism_point 20, 37, 3, 1, 1 @ 1095
	pointillism_point 6, 59, 2, 2, 1 @ 1096
	pointillism_point 6, 28, 2, 1, 1 @ 1097
	pointillism_point 21, 3, 3, 0, 0 @ 1098
	pointillism_point 30, 42, 3, 1, 1 @ 1099
	pointillism_point 23, 37, 5, 3, 1 @ 1100
	pointillism_point 28, 41, 5, 3, 0 @ 1101
	pointillism_point 2, 50, 3, 3, 0 @ 1102
	pointillism_point 29, 40, 6, 2, 1 @ 1103
	pointillism_point 54, 3, 6, 2, 0 @ 1104
	pointillism_point 22, 61, 5, 1, 0 @ 1105
	pointillism_point 18, 13, 2, 1, 1 @ 1106
	pointillism_point 29, 45, 4, 0, 1 @ 1107
	pointillism_point 50, 23, 5, 3, 0 @ 1108
	pointillism_point 26, 21, 4, 3, 0 @ 1109
	pointillism_point 34, 47, 2, 2, 1 @ 1110
	pointillism_point 60, 14, 4, 0, 0 @ 1111
	pointillism_point 47, 39, 2, 1, 1 @ 1112
	pointillism_point 4, 9, 6, 1, 0 @ 1113
	pointillism_point 30, 1, 6, 2, 0 @ 1114
	pointillism_point 6, 22, 3, 3, 0 @ 1115
	pointillism_point 46, 27, 3, 2, 0 @ 1116
	pointillism_point 40, 19, 5, 1, 0 @ 1117
	pointillism_point 48, 52, 2, 1, 0 @ 1118
	pointillism_point 18, 50, 3, 0, 0 @ 1119
	pointillism_point 29, 29, 6, 2, 1 @ 1120
	pointillism_point 7, 28, 2, 3, 0 @ 1121
	pointillism_point 45, 61, 6, 2, 1 @ 1122
	pointillism_point 28, 27, 4, 2, 0 @ 1123
	pointillism_point 33, 45, 3, 3, 0 @ 1124
	pointillism_point 16, 9, 2, 2, 0 @ 1125
	pointillism_point 61, 17, 2, 1, 0 @ 1126
	pointillism_point 37, 2, 4, 3, 0 @ 1127
	pointillism_point 35, 2, 3, 0, 1 @ 1128
	pointillism_point 25, 5, 2, 2, 0 @ 1129
	pointillism_point 11, 33, 3, 1, 0 @ 1130
	pointillism_point 9, 2, 5, 2, 0 @ 1131
	pointillism_point 24, 40, 5, 2, 1 @ 1132
	pointillism_point 30, 16, 2, 1, 0 @ 1133
	pointillism_point 46, 24, 5, 3, 0 @ 1134
	pointillism_point 31, 2, 5, 2, 0 @ 1135
	pointillism_point 20, 23, 4, 2, 0 @ 1136
	pointillism_point 57, 8, 6, 1, 0 @ 1137
	pointillism_point 22, 20, 4, 1, 0 @ 1138
	pointillism_point 22, 40, 4, 0, 1 @ 1139
	pointillism_point 17, 16, 5, 2, 0 @ 1140
	pointillism_point 35, 54, 5, 1, 1 @ 1141
	pointillism_point 57, 33, 4, 3, 0 @ 1142
	pointillism_point 14, 6, 5, 2, 1 @ 1143
	pointillism_point 60, 62, 4, 3, 0 @ 1144
	pointillism_point 42, 27, 3, 3, 1 @ 1145
	pointillism_point 0, 60, 6, 1, 1 @ 1146
	pointillism_point 53, 63, 2, 2, 0 @ 1147
	pointillism_point 0, 11, 2, 0, 0 @ 1148
	pointillism_point 52, 60, 2, 3, 1 @ 1149
	pointillism_point 45, 7, 3, 3, 1 @ 1150
	pointillism_point 36, 57, 4, 3, 1 @ 1151
	pointillism_point 22, 0, 3, 2, 1 @ 1152
	pointillism_point 51, 43, 3, 3, 0 @ 1153
	pointillism_point 15, 8, 6, 0, 1 @ 1154
	pointillism_point 58, 9, 2, 1, 1 @ 1155
	pointillism_point 12, 33, 3, 2, 0 @ 1156
	pointillism_point 42, 23, 6, 2, 0 @ 1157
	pointillism_point 41, 39, 2, 0, 0 @ 1158
	pointillism_point 55, 27, 3, 0, 0 @ 1159
	pointillism_point 21, 8, 5, 3, 1 @ 1160
	pointillism_point 31, 22, 2, 1, 0 @ 1161
	pointillism_point 31, 40, 6, 2, 0 @ 1162
	pointillism_point 28, 32, 4, 1, 0 @ 1163
	pointillism_point 18, 1, 2, 1, 0 @ 1164
	pointillism_point 33, 49, 2, 0, 0 @ 1165
	pointillism_point 34, 38, 3, 3, 0 @ 1166
	pointillism_point 1, 61, 2, 0, 1 @ 1167
	pointillism_point 30, 39, 4, 2, 1 @ 1168
	pointillism_point 61, 48, 4, 2, 0 @ 1169
	pointillism_point 29, 17, 4, 1, 0 @ 1170
	pointillism_point 54, 48, 2, 3, 0 @ 1171
	pointillism_point 31, 62, 5, 1, 0 @ 1172
	pointillism_point 60, 39, 3, 1, 1 @ 1173
	pointillism_point 31, 41, 2, 0, 0 @ 1174
	pointillism_point 30, 5, 5, 1, 0 @ 1175
	pointillism_point 10, 16, 2, 2, 0 @ 1176
	pointillism_point 31, 0, 5, 3, 0 @ 1177
	pointillism_point 11, 59, 3, 0, 0 @ 1178
	pointillism_point 10, 57, 6, 0, 0 @ 1179
	pointillism_point 55, 11, 3, 3, 1 @ 1180
	pointillism_point 29, 10, 5, 0, 1 @ 1181
	pointillism_point 62, 28, 6, 1, 1 @ 1182
	pointillism_point 19, 46, 5, 0, 0 @ 1183
	pointillism_point 39, 27, 3, 3, 0 @ 1184
	pointillism_point 29, 2, 3, 2, 0 @ 1185
	pointillism_point 1, 37, 2, 2, 0 @ 1186
	pointillism_point 58, 16, 3, 2, 0 @ 1187
	pointillism_point 18, 5, 5, 1, 0 @ 1188
	pointillism_point 48, 32, 4, 3, 0 @ 1189
	pointillism_point 47, 46, 5, 3, 0 @ 1190
	pointillism_point 3, 7, 4, 2, 0 @ 1191
	pointillism_point 54, 4, 5, 1, 1 @ 1192
	pointillism_point 17, 37, 5, 2, 1 @ 1193
	pointillism_point 40, 14, 5, 3, 0 @ 1194
	pointillism_point 15, 29, 2, 2, 1 @ 1195
	pointillism_point 28, 40, 6, 0, 0 @ 1196
	pointillism_point 31, 35, 4, 3, 0 @ 1197
	pointillism_point 54, 18, 6, 3, 1 @ 1198
	pointillism_point 58, 49, 2, 0, 0 @ 1199
	pointillism_point 44, 44, 5, 3, 1 @ 1200
	pointillism_point 26, 13, 2, 2, 1 @ 1201
	pointillism_point 63, 60, 6, 1, 0 @ 1202
	pointillism_point 53, 28, 2, 3, 0 @ 1203
	pointillism_point 51, 22, 5, 0, 0 @ 1204
	pointillism_point 29, 63, 4, 0, 1 @ 1205
	pointillism_point 44, 62, 5, 1, 1 @ 1206
	pointillism_point 36, 35, 5, 3, 1 @ 1207
	pointillism_point 50, 21, 5, 1, 0 @ 1208
	pointillism_point 27, 16, 6, 2, 1 @ 1209
	pointillism_point 24, 55, 2, 0, 0 @ 1210
	pointillism_point 59, 30, 2, 0, 1 @ 1211
	pointillism_point 43, 22, 4, 2, 0 @ 1212
	pointillism_point 29, 22, 4, 3, 0 @ 1213
	pointillism_point 60, 45, 2, 0, 1 @ 1214
	pointillism_point 21, 40, 5, 0, 0 @ 1215
	pointillism_point 39, 39, 4, 3, 1 @ 1216
	pointillism_point 59, 58, 2, 3, 0 @ 1217
	pointillism_point 26, 12, 3, 1, 0 @ 1218
	pointillism_point 21, 8, 4, 2, 1 @ 1219
	pointillism_point 11, 16, 4, 1, 0 @ 1220
	pointillism_point 26, 62, 2, 3, 1 @ 1221
	pointillism_point 40, 31, 3, 3, 0 @ 1222
	pointillism_point 1, 30, 3, 3, 0 @ 1223
	pointillism_point 28, 47, 2, 0, 0 @ 1224
	pointillism_point 37, 11, 6, 2, 0 @ 1225
	pointillism_point 62, 12, 3, 1, 0 @ 1226
	pointillism_point 27, 16, 5, 1, 0 @ 1227
	pointillism_point 15, 20, 2, 3, 1 @ 1228
	pointillism_point 15, 63, 2, 3, 1 @ 1229
	pointillism_point 3, 21, 3, 3, 1 @ 1230
	pointillism_point 2, 54, 2, 3, 1 @ 1231
	pointillism_point 21, 29, 3, 0, 0 @ 1232
	pointillism_point 8, 54, 2, 0, 0 @ 1233
	pointillism_point 20, 13, 5, 1, 1 @ 1234
	pointillism_point 10, 5, 3, 2, 1 @ 1235
	pointillism_point 38, 18, 3, 3, 0 @ 1236
	pointillism_point 62, 24, 3, 0, 1 @ 1237
	pointillism_point 54, 24, 6, 3, 1 @ 1238
	pointillism_point 23, 57, 5, 3, 0 @ 1239
	pointillism_point 13, 4, 3, 0, 1 @ 1240
	pointillism_point 22, 34, 2, 2, 1 @ 1241
	pointillism_point 62, 38, 3, 3, 1 @ 1242
	pointillism_point 0, 6, 2, 3, 1 @ 1243
	pointillism_point 51, 34, 3, 2, 1 @ 1244
	pointillism_point 43, 57, 5, 1, 1 @ 1245
	pointillism_point 62, 49, 3, 2, 0 @ 1246
	pointillism_point 34, 63, 2, 1, 1 @ 1247
	pointillism_point 48, 28, 6, 0, 1 @ 1248
	pointillism_point 7, 43, 2, 2, 0 @ 1249
	pointillism_point 50, 53, 3, 3, 0 @ 1250
	pointillism_point 2, 7, 4, 0, 0 @ 1251
	pointillism_point 15, 59, 2, 0, 1 @ 1252
	pointillism_point 32, 7, 2, 1, 0 @ 1253
	pointillism_point 42, 48, 3, 2, 1 @ 1254
	pointillism_point 40, 56, 6, 3, 0 @ 1255
	pointillism_point 32, 1, 2, 3, 1 @ 1256
	pointillism_point 21, 32, 4, 0, 1 @ 1257
	pointillism_point 58, 27, 3, 3, 0 @ 1258
	pointillism_point 56, 18, 4, 2, 0 @ 1259
	pointillism_point 3, 62, 3, 3, 1 @ 1260
	pointillism_point 41, 29, 2, 1, 1 @ 1261
	pointillism_point 32, 39, 3, 0, 1 @ 1262
	pointillism_point 18, 37, 4, 0, 0 @ 1263
	pointillism_point 50, 51, 5, 1, 1 @ 1264
	pointillism_point 63, 5, 6, 0, 1 @ 1265
	pointillism_point 53, 60, 5, 2, 1 @ 1266
	pointillism_point 45, 2, 5, 3, 0 @ 1267
	pointillism_point 16, 42, 2, 3, 0 @ 1268
	pointillism_point 23, 8, 6, 0, 1 @ 1269
	pointillism_point 23, 46, 5, 1, 1 @ 1270
	pointillism_point 48, 30, 2, 2, 1 @ 1271
	pointillism_point 49, 21, 4, 3, 0 @ 1272
	pointillism_point 8, 16, 6, 1, 1 @ 1273
	pointillism_point 21, 1, 4, 3, 1 @ 1274
	pointillism_point 18, 7, 5, 3, 1 @ 1275
	pointillism_point 41, 39, 6, 2, 0 @ 1276
	pointillism_point 63, 8, 6, 0, 1 @ 1277
	pointillism_point 28, 32, 3, 1, 0 @ 1278
	pointillism_point 51, 12, 2, 1, 1 @ 1279
	pointillism_point 24, 49, 4, 2, 0 @ 1280
	pointillism_point 55, 45, 5, 3, 0 @ 1281
	pointillism_point 33, 24, 4, 2, 0 @ 1282
	pointillism_point 58, 39, 6, 0, 1 @ 1283
	pointillism_point 53, 62, 6, 0, 0 @ 1284
	pointillism_point 58, 20, 6, 1, 1 @ 1285
	pointillism_point 15, 26, 5, 2, 1 @ 1286
	pointillism_point 48, 46, 2, 0, 1 @ 1287
	pointillism_point 26, 49, 3, 2, 1 @ 1288
	pointillism_point 23, 60, 3, 0, 0 @ 1289
	pointillism_point 51, 49, 4, 1, 1 @ 1290
	pointillism_point 29, 57, 5, 2, 1 @ 1291
	pointillism_point 16, 29, 5, 3, 1 @ 1292
	pointillism_point 36, 21, 3, 2, 0 @ 1293
	pointillism_point 37, 1, 5, 1, 1 @ 1294
	pointillism_point 34, 22, 5, 3, 0 @ 1295
	pointillism_point 27, 37, 6, 2, 1 @ 1296
	pointillism_point 55, 16, 4, 3, 0 @ 1297
	pointillism_point 57, 1, 6, 3, 0 @ 1298
	pointillism_point 23, 43, 2, 2, 0 @ 1299
	pointillism_point 9, 22, 2, 3, 1 @ 1300
	pointillism_point 32, 40, 4, 1, 1 @ 1301
	pointillism_point 38, 58, 4, 3, 0 @ 1302
	pointillism_point 39, 42, 4, 2, 0 @ 1303
	pointillism_point 54, 2, 5, 2, 0 @ 1304
	pointillism_point 41, 48, 6, 2, 1 @ 1305
	pointillism_point 54, 1, 3, 3, 1 @ 1306
	pointillism_point 40, 59, 3, 2, 1 @ 1307
	pointillism_point 35, 30, 5, 2, 1 @ 1308
	pointillism_point 17, 30, 5, 2, 0 @ 1309
	pointillism_point 47, 50, 3, 0, 1 @ 1310
	pointillism_point 63, 38, 6, 0, 1 @ 1311
	pointillism_point 56, 30, 2, 3, 1 @ 1312
	pointillism_point 5, 24, 5, 3, 0 @ 1313
	pointillism_point 0, 46, 2, 1, 0 @ 1314
	pointillism_point 52, 63, 6, 2, 0 @ 1315
	pointillism_point 22, 16, 5, 0, 1 @ 1316
	pointillism_point 32, 61, 6, 3, 0 @ 1317
	pointillism_point 47, 22, 4, 2, 1 @ 1318
	pointillism_point 18, 23, 2, 0, 0 @ 1319
	pointillism_point 33, 55, 6, 2, 1 @ 1320
	pointillism_point 37, 55, 5, 2, 1 @ 1321
	pointillism_point 1, 8, 4, 3, 1 @ 1322
	pointillism_point 3, 31, 5, 0, 1 @ 1323
	pointillism_point 13, 42, 2, 3, 0 @ 1324
	pointillism_point 58, 63, 6, 1, 1 @ 1325
	pointillism_point 43, 25, 3, 2, 1 @ 1326
	pointillism_point 42, 31, 5, 0, 1 @ 1327
	pointillism_point 40, 44, 2, 0, 0 @ 1328
	pointillism_point 40, 48, 2, 0, 0 @ 1329
	pointillism_point 57, 20, 3, 1, 1 @ 1330
	pointillism_point 0, 24, 4, 0, 1 @ 1331
	pointillism_point 40, 12, 6, 3, 1 @ 1332
	pointillism_point 17, 16, 2, 0, 1 @ 1333
	pointillism_point 60, 51, 6, 1, 0 @ 1334
	pointillism_point 51, 54, 3, 1, 0 @ 1335
	pointillism_point 54, 0, 3, 2, 0 @ 1336
	pointillism_point 49, 27, 3, 2, 1 @ 1337
	pointillism_point 56, 29, 2, 0, 0 @ 1338
	pointillism_point 60, 57, 4, 3, 1 @ 1339
	pointillism_point 58, 63, 2, 2, 0 @ 1340
	pointillism_point 25, 18, 2, 2, 0 @ 1341
	pointillism_point 13, 31, 3, 0, 0 @ 1342
	pointillism_point 0, 37, 3, 0, 0 @ 1343
	pointillism_point 40, 28, 6, 1, 0 @ 1344
	pointillism_point 39, 3, 3, 1, 0 @ 1345
	pointillism_point 38, 45, 5, 1, 0 @ 1346
	pointillism_point 41, 40, 4, 3, 1 @ 1347
	pointillism_point 10, 42, 3, 0, 0 @ 1348
	pointillism_point 10, 26, 6, 0, 0 @ 1349
	pointillism_point 32, 26, 5, 3, 0 @ 1350
	pointillism_point 6, 11, 3, 2, 1 @ 1351
	pointillism_point 15, 12, 3, 2, 0 @ 1352
	pointillism_point 53, 40, 3, 2, 0 @ 1353
	pointillism_point 61, 22, 4, 1, 1 @ 1354
	pointillism_point 33, 28, 6, 0, 1 @ 1355
	pointillism_point 20, 28, 5, 3, 0 @ 1356
	pointillism_point 34, 50, 6, 2, 1 @ 1357
	pointillism_point 9, 41, 6, 0, 0 @ 1358
	pointillism_point 32, 26, 2, 0, 0 @ 1359
	pointillism_point 49, 63, 5, 2, 0 @ 1360
	pointillism_point 10, 61, 6, 3, 1 @ 1361
	pointillism_point 11, 46, 5, 2, 1 @ 1362
	pointillism_point 31, 34, 6, 0, 1 @ 1363
	pointillism_point 6, 7, 5, 0, 1 @ 1364
	pointillism_point 34, 23, 5, 2, 1 @ 1365
	pointillism_point 48, 17, 3, 0, 0 @ 1366
	pointillism_point 12, 25, 2, 2, 1 @ 1367
	pointillism_point 7, 10, 6, 2, 0 @ 1368
	pointillism_point 24, 41, 4, 3, 1 @ 1369
	pointillism_point 51, 12, 6, 0, 0 @ 1370
	pointillism_point 3, 26, 6, 3, 1 @ 1371
	pointillism_point 6, 1, 5, 2, 1 @ 1372
	pointillism_point 15, 59, 5, 1, 1 @ 1373
	pointillism_point 17, 31, 6, 3, 1 @ 1374
	pointillism_point 43, 33, 6, 3, 0 @ 1375
	pointillism_point 63, 35, 2, 3, 1 @ 1376
	pointillism_point 23, 7, 5, 1, 1 @ 1377
	pointillism_point 43, 14, 6, 0, 0 @ 1378
	pointillism_point 17, 57, 3, 2, 1 @ 1379
	pointillism_point 41, 3, 6, 1, 1 @ 1380
	pointillism_point 48, 3, 5, 3, 1 @ 1381
	pointillism_point 60, 32, 4, 3, 0 @ 1382
	pointillism_point 3, 34, 2, 2, 0 @ 1383
	pointillism_point 58, 40, 6, 2, 1 @ 1384
	pointillism_point 1, 40, 5, 1, 1 @ 1385
	pointillism_point 62, 21, 3, 0, 0 @ 1386
	pointillism_point 48, 7, 2, 3, 1 @ 1387
	pointillism_point 59, 44, 6, 0, 0 @ 1388
	pointillism_point 21, 7, 5, 2, 0 @ 1389
	pointillism_point 23, 39, 3, 2, 1 @ 1390
	pointillism_point 63, 30, 6, 1, 1 @ 1391
	pointillism_point 13, 23, 2, 0, 0 @ 1392
	pointillism_point 21, 14, 6, 0, 0 @ 1393
	pointillism_point 9, 5, 6, 0, 0 @ 1394
	pointillism_point 45, 32, 2, 2, 1 @ 1395
	pointillism_point 60, 61, 6, 0, 0 @ 1396
	pointillism_point 12, 23, 3, 2, 0 @ 1397
	pointillism_point 26, 13, 4, 2, 1 @ 1398
	pointillism_point 43, 43, 5, 1, 0 @ 1399
	pointillism_point 2, 22, 5, 2, 1 @ 1400
	pointillism_point 23, 49, 2, 3, 1 @ 1401
	pointillism_point 0, 8, 2, 1, 1 @ 1402
	pointillism_point 55, 53, 4, 0, 1 @ 1403
	pointillism_point 30, 28, 3, 3, 1 @ 1404
	pointillism_point 43, 50, 3, 2, 0 @ 1405
	pointillism_point 16, 42, 2, 3, 0 @ 1406
	pointillism_point 58, 51, 6, 0, 1 @ 1407
	pointillism_point 23, 43, 5, 1, 0 @ 1408
	pointillism_point 12, 61, 2, 0, 1 @ 1409
	pointillism_point 40, 10, 6, 0, 0 @ 1410
	pointillism_point 35, 10, 4, 3, 0 @ 1411
	pointillism_point 10, 20, 4, 2, 0 @ 1412
	pointillism_point 11, 15, 6, 0, 0 @ 1413
	pointillism_point 27, 30, 5, 0, 1 @ 1414
	pointillism_point 2, 53, 5, 0, 0 @ 1415
	pointillism_point 59, 2, 2, 2, 0 @ 1416
	pointillism_point 0, 15, 6, 2, 1 @ 1417
	pointillism_point 28, 60, 5, 3, 0 @ 1418
	pointillism_point 40, 56, 3, 0, 1 @ 1419
	pointillism_point 27, 17, 2, 1, 0 @ 1420
	pointillism_point 9, 22, 2, 0, 0 @ 1421
	pointillism_point 46, 13, 4, 0, 0 @ 1422
	pointillism_point 61, 4, 6, 1, 0 @ 1423
	pointillism_point 22, 44, 4, 2, 1 @ 1424
	pointillism_point 2, 61, 3, 0, 0 @ 1425
	pointillism_point 11, 19, 3, 2, 0 @ 1426
	pointillism_point 34, 42, 3, 2, 0 @ 1427
	pointillism_point 32, 39, 4, 1, 0 @ 1428
	pointillism_point 5, 38, 4, 1, 0 @ 1429
	pointillism_point 18, 29, 5, 2, 0 @ 1430
	pointillism_point 8, 5, 5, 3, 0 @ 1431
	pointillism_point 63, 28, 2, 3, 1 @ 1432
	pointillism_point 36, 13, 6, 1, 1 @ 1433
	pointillism_point 54, 8, 4, 2, 0 @ 1434
	pointillism_point 16, 34, 5, 0, 1 @ 1435
	pointillism_point 28, 10, 2, 0, 1 @ 1436
	pointillism_point 37, 15, 2, 0, 0 @ 1437
	pointillism_point 36, 56, 5, 3, 1 @ 1438
	pointillism_point 37, 50, 3, 3, 0 @ 1439
	pointillism_point 6, 42, 5, 0, 1 @ 1440
	pointillism_point 62, 58, 5, 0, 0 @ 1441
	pointillism_point 52, 23, 6, 1, 1 @ 1442
	pointillism_point 24, 51, 2, 3, 1 @ 1443
	pointillism_point 7, 20, 3, 3, 1 @ 1444
	pointillism_point 17, 23, 4, 0, 0 @ 1445
	pointillism_point 19, 14, 2, 2, 0 @ 1446
	pointillism_point 59, 28, 2, 1, 0 @ 1447
	pointillism_point 42, 19, 6, 3, 1 @ 1448
	pointillism_point 42, 53, 6, 1, 0 @ 1449
	pointillism_point 48, 2, 4, 2, 1 @ 1450
	pointillism_point 0, 7, 3, 3, 1 @ 1451
	pointillism_point 12, 4, 5, 2, 0 @ 1452
	pointillism_point 55, 55, 6, 0, 0 @ 1453
	pointillism_point 37, 18, 4, 2, 1 @ 1454
	pointillism_point 18, 34, 4, 0, 1 @ 1455
	pointillism_point 34, 53, 6, 1, 1 @ 1456
	pointillism_point 7, 32, 5, 2, 1 @ 1457
	pointillism_point 39, 14, 6, 0, 0 @ 1458
	pointillism_point 52, 25, 3, 1, 0 @ 1459
	pointillism_point 10, 60, 4, 2, 1 @ 1460
	pointillism_point 7, 29, 5, 1, 1 @ 1461
	pointillism_point 49, 58, 2, 1, 0 @ 1462
	pointillism_point 26, 61, 6, 3, 1 @ 1463
	pointillism_point 22, 21, 2, 3, 0 @ 1464
	pointillism_point 57, 19, 2, 2, 1 @ 1465
	pointillism_point 45, 3, 5, 3, 0 @ 1466
	pointillism_point 6, 57, 5, 2, 0 @ 1467
	pointillism_point 22, 0, 2, 1, 1 @ 1468
	pointillism_point 53, 42, 6, 2, 1 @ 1469
	pointillism_point 36, 1, 3, 0, 0 @ 1470
	pointillism_point 36, 55, 5, 0, 0 @ 1471
	pointillism_point 37, 27, 6, 2, 0 @ 1472
	pointillism_point 37, 25, 2, 3, 1 @ 1473
	pointillism_point 39, 47, 3, 1, 1 @ 1474
	pointillism_point 39, 13, 2, 0, 0 @ 1475
	pointillism_point 54, 60, 6, 0, 0 @ 1476
	pointillism_point 60, 51, 4, 1, 1 @ 1477
	pointillism_point 62, 39, 3, 3, 0 @ 1478
	pointillism_point 37, 45, 5, 0, 1 @ 1479
	pointillism_point 31, 18, 4, 0, 1 @ 1480
	pointillism_point 55, 50, 3, 3, 1 @ 1481
	pointillism_point 17, 33, 6, 2, 1 @ 1482
	pointillism_point 48, 12, 3, 0, 1 @ 1483
	pointillism_point 37, 61, 4, 3, 0 @ 1484
	pointillism_point 23, 2, 3, 2, 1 @ 1485
	pointillism_point 20, 46, 2, 0, 1 @ 1486
	pointillism_point 56, 19, 6, 0, 0 @ 1487
	pointillism_point 10, 43, 4, 0, 0 @ 1488
	pointillism_point 30, 16, 2, 2, 1 @ 1489
	pointillism_point 55, 48, 5, 3, 0 @ 1490
	pointillism_point 30, 4, 5, 2, 0 @ 1491
	pointillism_point 20, 52, 3, 0, 1 @ 1492
	pointillism_point 8, 20, 3, 0, 0 @ 1493
	pointillism_point 14, 28, 6, 0, 0 @ 1494
	pointillism_point 26, 46, 3, 1, 1 @ 1495
	pointillism_point 31, 57, 6, 0, 1 @ 1496
	pointillism_point 12, 28, 5, 0, 0 @ 1497
	pointillism_point 62, 51, 4, 1, 1 @ 1498
	pointillism_point 15, 19, 2, 3, 0 @ 1499
	pointillism_point 37, 57, 5, 3, 1 @ 1500
	pointillism_point 20, 27, 3, 1, 0 @ 1501
	pointillism_point 40, 62, 4, 0, 1 @ 1502
	pointillism_point 45, 25, 2, 0, 1 @ 1503
	pointillism_point 12, 52, 6, 1, 0 @ 1504
	pointillism_point 57, 49, 3, 0, 1 @ 1505
	pointillism_point 26, 8, 6, 2, 0 @ 1506
	pointillism_point 9, 47, 2, 0, 1 @ 1507
	pointillism_point 48, 4, 3, 2, 0 @ 1508
	pointillism_point 2, 59, 3, 1, 1 @ 1509
	pointillism_point 51, 33, 6, 1, 1 @ 1510
	pointillism_point 56, 2, 3, 1, 0 @ 1511
	pointillism_point 49, 56, 6, 1, 0 @ 1512
	pointillism_point 31, 29, 2, 3, 0 @ 1513
	pointillism_point 23, 16, 3, 1, 1 @ 1514
	pointillism_point 50, 32, 2, 3, 1 @ 1515
	pointillism_point 0, 51, 2, 1, 0 @ 1516
	pointillism_point 33, 15, 4, 3, 1 @ 1517
	pointillism_point 20, 25, 4, 3, 1 @ 1518
	pointillism_point 36, 44, 6, 3, 1 @ 1519
	pointillism_point 37, 5, 5, 3, 1 @ 1520
	pointillism_point 61, 37, 2, 0, 1 @ 1521
	pointillism_point 18, 48, 3, 1, 0 @ 1522
	pointillism_point 22, 3, 3, 1, 0 @ 1523
	pointillism_point 20, 9, 2, 1, 1 @ 1524
	pointillism_point 2, 35, 4, 1, 0 @ 1525
	pointillism_point 1, 60, 2, 0, 0 @ 1526
	pointillism_point 63, 45, 4, 1, 1 @ 1527
	pointillism_point 49, 63, 4, 1, 1 @ 1528
	pointillism_point 23, 0, 6, 1, 1 @ 1529
	pointillism_point 63, 15, 5, 3, 1 @ 1530
	pointillism_point 38, 7, 2, 2, 1 @ 1531
	pointillism_point 33, 43, 5, 1, 0 @ 1532
	pointillism_point 56, 57, 3, 3, 0 @ 1533
	pointillism_point 9, 37, 5, 1, 1 @ 1534
	pointillism_point 59, 48, 4, 2, 1 @ 1535
	pointillism_point 18, 45, 2, 1, 1 @ 1536
	pointillism_point 50, 25, 5, 0, 0 @ 1537
	pointillism_point 36, 28, 5, 2, 1 @ 1538
	pointillism_point 53, 50, 4, 3, 0 @ 1539
	pointillism_point 13, 35, 3, 3, 0 @ 1540
	pointillism_point 29, 7, 4, 0, 1 @ 1541
	pointillism_point 11, 52, 2, 3, 1 @ 1542
	pointillism_point 45, 50, 6, 1, 0 @ 1543
	pointillism_point 58, 60, 6, 2, 1 @ 1544
	pointillism_point 26, 16, 6, 1, 1 @ 1545
	pointillism_point 26, 7, 4, 1, 0 @ 1546
	pointillism_point 59, 27, 5, 1, 0 @ 1547
	pointillism_point 51, 31, 4, 3, 0 @ 1548
	pointillism_point 14, 53, 3, 1, 0 @ 1549
	pointillism_point 59, 10, 3, 2, 0 @ 1550
	pointillism_point 17, 7, 2, 0, 1 @ 1551
	pointillism_point 13, 60, 5, 2, 1 @ 1552
	pointillism_point 30, 55, 5, 0, 1 @ 1553
	pointillism_point 17, 5, 2, 1, 0 @ 1554
	pointillism_point 21, 47, 3, 2, 0 @ 1555
	pointillism_point 36, 49, 2, 3, 0 @ 1556
	pointillism_point 43, 33, 3, 1, 1 @ 1557
	pointillism_point 35, 16, 6, 0, 1 @ 1558
	pointillism_point 2, 20, 5, 0, 1 @ 1559
	pointillism_point 38, 32, 2, 3, 0 @ 1560
	pointillism_point 16, 23, 2, 0, 0 @ 1561
	pointillism_point 11, 15, 6, 1, 1 @ 1562
	pointillism_point 1, 46, 2, 2, 0 @ 1563
	pointillism_point 33, 14, 6, 3, 1 @ 1564
	pointillism_point 26, 29, 5, 3, 1 @ 1565
	pointillism_point 30, 48, 4, 2, 0 @ 1566
	pointillism_point 4, 20, 5, 2, 1 @ 1567
	pointillism_point 17, 0, 6, 0, 0 @ 1568
	pointillism_point 8, 42, 3, 2, 1 @ 1569
	pointillism_point 29, 34, 4, 0, 1 @ 1570
	pointillism_point 36, 44, 6, 3, 1 @ 1571
	pointillism_point 36, 17, 2, 1, 0 @ 1572
	pointillism_point 4, 46, 5, 0, 0 @ 1573
	pointillism_point 29, 24, 4, 1, 1 @ 1574
	pointillism_point 60, 22, 2, 3, 0 @ 1575
	pointillism_point 16, 23, 6, 0, 1 @ 1576
	pointillism_point 32, 33, 2, 1, 0 @ 1577
	pointillism_point 51, 62, 6, 2, 0 @ 1578
	pointillism_point 6, 19, 2, 1, 1 @ 1579
	pointillism_point 23, 56, 5, 1, 1 @ 1580
	pointillism_point 20, 13, 2, 2, 1 @ 1581
	pointillism_point 36, 59, 5, 1, 1 @ 1582
	pointillism_point 52, 59, 3, 3, 0 @ 1583
	pointillism_point 24, 7, 6, 2, 0 @ 1584
	pointillism_point 55, 29, 3, 3, 1 @ 1585
	pointillism_point 11, 41, 4, 0, 0 @ 1586
	pointillism_point 18, 30, 3, 2, 1 @ 1587
	pointillism_point 26, 36, 4, 2, 0 @ 1588
	pointillism_point 61, 40, 4, 2, 0 @ 1589
	pointillism_point 11, 18, 6, 1, 1 @ 1590
	pointillism_point 27, 58, 4, 1, 0 @ 1591
	pointillism_point 20, 19, 5, 1, 0 @ 1592
	pointillism_point 49, 56, 2, 2, 1 @ 1593
	pointillism_point 55, 43, 5, 3, 0 @ 1594
	pointillism_point 25, 30, 5, 2, 0 @ 1595
	pointillism_point 63, 27, 5, 1, 0 @ 1596
	pointillism_point 51, 31, 6, 1, 1 @ 1597
	pointillism_point 63, 21, 5, 0, 1 @ 1598
	pointillism_point 1, 30, 3, 0, 0 @ 1599
	pointillism_point 31, 34, 3, 0, 1 @ 1600
	pointillism_point 51, 60, 6, 2, 0 @ 1601
	pointillism_point 30, 18, 4, 1, 0 @ 1602
	pointillism_point 13, 55, 5, 2, 0 @ 1603
	pointillism_point 15, 8, 6, 0, 1 @ 1604
	pointillism_point 46, 9, 6, 3, 0 @ 1605
	pointillism_point 1, 5, 3, 3, 0 @ 1606
	pointillism_point 28, 4, 3, 3, 0 @ 1607
	pointillism_point 12, 1, 3, 2, 0 @ 1608
	pointillism_point 41, 40, 5, 3, 1 @ 1609
	pointillism_point 57, 45, 2, 2, 0 @ 1610
	pointillism_point 9, 34, 6, 3, 0 @ 1611
	pointillism_point 4, 55, 6, 3, 1 @ 1612
	pointillism_point 45, 47, 6, 2, 1 @ 1613
	pointillism_point 36, 35, 3, 1, 1 @ 1614
	pointillism_point 8, 32, 6, 1, 0 @ 1615
	pointillism_point 32, 31, 6, 2, 0 @ 1616
	pointillism_point 2, 49, 3, 0, 1 @ 1617
	pointillism_point 24, 19, 6, 3, 0 @ 1618
	pointillism_point 6, 43, 3, 3, 0 @ 1619
	pointillism_point 14, 27, 2, 0, 0 @ 1620
	pointillism_point 47, 14, 3, 2, 0 @ 1621
	pointillism_point 17, 56, 2, 1, 1 @ 1622
	pointillism_point 1, 55, 3, 0, 1 @ 1623
	pointillism_point 20, 17, 4, 3, 0 @ 1624
	pointillism_point 49, 61, 6, 1, 1 @ 1625
	pointillism_point 29, 27, 6, 2, 0 @ 1626
	pointillism_point 37, 49, 5, 3, 1 @ 1627
	pointillism_point 17, 10, 5, 3, 1 @ 1628
	pointillism_point 57, 23, 3, 1, 1 @ 1629
	pointillism_point 5, 14, 2, 1, 1 @ 1630
	pointillism_point 41, 37, 4, 1, 0 @ 1631
	pointillism_point 21, 13, 4, 0, 0 @ 1632
	pointillism_point 43, 39, 4, 0, 1 @ 1633
	pointillism_point 62, 36, 4, 3, 1 @ 1634
	pointillism_point 42, 43, 2, 3, 0 @ 1635
	pointillism_point 36, 61, 2, 2, 1 @ 1636
	pointillism_point 21, 48, 6, 0, 1 @ 1637
	pointillism_point 15, 51, 4, 2, 0 @ 1638
	pointillism_point 6, 22, 2, 1, 1 @ 1639
	pointillism_point 6, 49, 2, 0, 0 @ 1640
	pointillism_point 46, 63, 2, 0, 0 @ 1641
	pointillism_point 5, 13, 5, 3, 1 @ 1642
	pointillism_point 60, 31, 3, 0, 1 @ 1643
	pointillism_point 18, 19, 4, 2, 0 @ 1644
	pointillism_point 15, 51, 6, 3, 0 @ 1645
	pointillism_point 21, 59, 6, 1, 1 @ 1646
	pointillism_point 3, 15, 5, 1, 0 @ 1647
	pointillism_point 59, 60, 5, 2, 0 @ 1648
	pointillism_point 54, 9, 5, 0, 1 @ 1649
	pointillism_point 17, 59, 4, 3, 1 @ 1650
	pointillism_point 40, 43, 6, 0, 1 @ 1651
	pointillism_point 26, 14, 5, 3, 1 @ 1652
	pointillism_point 57, 44, 6, 0, 1 @ 1653
	pointillism_point 14, 60, 6, 2, 1 @ 1654
	pointillism_point 44, 36, 6, 1, 1 @ 1655
	pointillism_point 61, 17, 5, 1, 1 @ 1656
	pointillism_point 7, 60, 6, 3, 1 @ 1657
	pointillism_point 20, 24, 2, 1, 1 @ 1658
	pointillism_point 29, 63, 5, 3, 0 @ 1659
	pointillism_point 48, 18, 4, 2, 1 @ 1660
	pointillism_point 38, 29, 2, 0, 1 @ 1661
	pointillism_point 7, 17, 3, 3, 0 @ 1662
	pointillism_point 52, 1, 2, 0, 1 @ 1663
	pointillism_point 11, 57, 4, 0, 1 @ 1664
	pointillism_point 41, 2, 5, 0, 1 @ 1665
	pointillism_point 21, 16, 3, 1, 0 @ 1666
	pointillism_point 48, 31, 6, 2, 1 @ 1667
	pointillism_point 60, 43, 5, 1, 0 @ 1668
	pointillism_point 48, 59, 6, 3, 0 @ 1669
	pointillism_point 32, 26, 4, 1, 1 @ 1670
	pointillism_point 50, 36, 5, 1, 1 @ 1671
	pointillism_point 21, 32, 3, 2, 0 @ 1672
	pointillism_point 37, 61, 6, 3, 0 @ 1673
	pointillism_point 45, 20, 6, 0, 1 @ 1674
	pointillism_point 24, 35, 2, 3, 1 @ 1675
	pointillism_point 24, 5, 2, 1, 1 @ 1676
	pointillism_point 52, 48, 6, 3, 1 @ 1677
	pointillism_point 14, 57, 4, 1, 1 @ 1678
	pointillism_point 29, 31, 2, 3, 1 @ 1679
	pointillism_point 1, 21, 5, 3, 1 @ 1680
	pointillism_point 11, 62, 3, 1, 1 @ 1681
	pointillism_point 13, 25, 5, 3, 0 @ 1682
	pointillism_point 49, 56, 3, 2, 0 @ 1683
	pointillism_point 21, 52, 2, 2, 1 @ 1684
	pointillism_point 19, 25, 5, 0, 1 @ 1685
	pointillism_point 25, 20, 4, 3, 1 @ 1686
	pointillism_point 21, 24, 4, 1, 1 @ 1687
	pointillism_point 41, 12, 4, 3, 1 @ 1688
	pointillism_point 45, 14, 2, 3, 1 @ 1689
	pointillism_point 52, 24, 2, 0, 0 @ 1690
	pointillism_point 59, 30, 5, 0, 1 @ 1691
	pointillism_point 52, 44, 4, 1, 0 @ 1692
	pointillism_point 49, 8, 2, 1, 1 @ 1693
	pointillism_point 29, 24, 3, 1, 0 @ 1694
	pointillism_point 28, 11, 5, 1, 0 @ 1695
	pointillism_point 25, 30, 3, 1, 0 @ 1696
	pointillism_point 35, 39, 2, 3, 1 @ 1697
	pointillism_point 59, 14, 6, 3, 1 @ 1698
	pointillism_point 25, 43, 2, 3, 0 @ 1699
	pointillism_point 47, 8, 4, 0, 1 @ 1700
	pointillism_point 55, 2, 4, 0, 0 @ 1701
	pointillism_point 11, 50, 6, 0, 0 @ 1702
	pointillism_point 22, 5, 6, 0, 0 @ 1703
	pointillism_point 19, 5, 3, 1, 0 @ 1704
	pointillism_point 7, 57, 3, 0, 1 @ 1705
	pointillism_point 12, 59, 5, 1, 0 @ 1706
	pointillism_point 21, 5, 6, 0, 0 @ 1707
	pointillism_point 48, 5, 3, 0, 1 @ 1708
	pointillism_point 19, 0, 2, 1, 0 @ 1709
	pointillism_point 39, 22, 5, 1, 0 @ 1710
	pointillism_point 15, 40, 4, 3, 1 @ 1711
	pointillism_point 12, 35, 5, 3, 1 @ 1712
	pointillism_point 57, 40, 5, 1, 0 @ 1713
	pointillism_point 36, 37, 3, 3, 1 @ 1714
	pointillism_point 24, 41, 2, 2, 0 @ 1715
	pointillism_point 22, 5, 3, 1, 0 @ 1716
	pointillism_point 53, 47, 4, 3, 0 @ 1717
	pointillism_point 10, 58, 5, 0, 1 @ 1718
	pointillism_point 52, 44, 6, 3, 0 @ 1719
	pointillism_point 46, 58, 2, 2, 1 @ 1720
	pointillism_point 26, 10, 5, 2, 1 @ 1721
	pointillism_point 22, 20, 5, 3, 0 @ 1722
	pointillism_point 53, 40, 5, 1, 0 @ 1723
	pointillism_point 53, 15, 2, 0, 1 @ 1724
	pointillism_point 17, 50, 3, 0, 1 @ 1725
	pointillism_point 32, 26, 5, 0, 0 @ 1726
	pointillism_point 23, 26, 5, 0, 0 @ 1727
	pointillism_point 22, 51, 4, 2, 1 @ 1728
	pointillism_point 19, 44, 5, 0, 1 @ 1729
	pointillism_point 9, 22, 6, 1, 1 @ 1730
	pointillism_point 29, 39, 4, 3, 0 @ 1731
	pointillism_point 21, 12, 5, 3, 1 @ 1732
	pointillism_point 34, 28, 3, 0, 1 @ 1733
	pointillism_point 41, 51, 2, 0, 0 @ 1734
	pointillism_point 45, 17, 3, 1, 1 @ 1735
	pointillism_point 22, 25, 5, 3, 0 @ 1736
	pointillism_point 13, 12, 5, 0, 0 @ 1737
	pointillism_point 55, 58, 6, 2, 0 @ 1738
	pointillism_point 42, 29, 6, 3, 1 @ 1739
	pointillism_point 48, 10, 6, 3, 0 @ 1740
	pointillism_point 36, 57, 3, 1, 1 @ 1741
	pointillism_point 57, 10, 6, 1, 0 @ 1742
	pointillism_point 17, 3, 5, 2, 1 @ 1743
	pointillism_point 50, 29, 6, 0, 0 @ 1744
	pointillism_point 56, 30, 4, 3, 1 @ 1745
	pointillism_point 46, 23, 3, 0, 0 @ 1746
	pointillism_point 22, 23, 5, 1, 0 @ 1747
	pointillism_point 54, 59, 6, 0, 1 @ 1748
	pointillism_point 23, 4, 3, 0, 1 @ 1749
	pointillism_point 58, 37, 5, 2, 1 @ 1750
	pointillism_point 0, 54, 4, 3, 1 @ 1751
	pointillism_point 37, 18, 6, 1, 1 @ 1752
	pointillism_point 6, 10, 2, 2, 0 @ 1753
	pointillism_point 17, 5, 5, 3, 1 @ 1754
	pointillism_point 3, 53, 5, 3, 1 @ 1755
	pointillism_point 11, 52, 5, 0, 1 @ 1756
	pointillism_point 0, 49, 2, 1, 1 @ 1757
	pointillism_point 39, 15, 3, 2, 0 @ 1758
	pointillism_point 29, 6, 5, 2, 1 @ 1759
	pointillism_point 28, 48, 4, 3, 1 @ 1760
	pointillism_point 47, 42, 4, 3, 1 @ 1761
	pointillism_point 22, 32, 6, 0, 1 @ 1762
	pointillism_point 51, 43, 5, 1, 1 @ 1763
	pointillism_point 5, 48, 6, 3, 0 @ 1764
	pointillism_point 41, 35, 6, 2, 1 @ 1765
	pointillism_point 16, 22, 5, 3, 1 @ 1766
	pointillism_point 45, 32, 5, 0, 1 @ 1767
	pointillism_point 55, 19, 4, 2, 0 @ 1768
	pointillism_point 45, 14, 4, 2, 1 @ 1769
	pointillism_point 8, 10, 3, 0, 0 @ 1770
	pointillism_point 15, 3, 3, 1, 1 @ 1771
	pointillism_point 49, 12, 6, 3, 1 @ 1772
	pointillism_point 30, 52, 6, 0, 1 @ 1773
	pointillism_point 27, 14, 4, 2, 1 @ 1774
	pointillism_point 26, 7, 6, 2, 0 @ 1775
	pointillism_point 13, 60, 6, 1, 1 @ 1776
	pointillism_point 0, 58, 6, 3, 0 @ 1777
	pointillism_point 4, 39, 2, 1, 0 @ 1778
	pointillism_point 35, 24, 4, 2, 0 @ 1779
	pointillism_point 13, 11, 3, 0, 0 @ 1780
	pointillism_point 49, 50, 6, 3, 1 @ 1781
	pointillism_point 0, 13, 4, 0, 1 @ 1782
	pointillism_point 50, 16, 2, 1, 0 @ 1783
	pointillism_point 38, 13, 3, 0, 1 @ 1784
	pointillism_point 41, 36, 5, 1, 1 @ 1785
	pointillism_point 61, 33, 3, 3, 1 @ 1786
	pointillism_point 30, 27, 5, 0, 0 @ 1787
	pointillism_point 13, 18, 5, 0, 0 @ 1788
	pointillism_point 53, 30, 4, 1, 1 @ 1789
	pointillism_point 10, 46, 4, 1, 0 @ 1790
	pointillism_point 39, 39, 6, 2, 1 @ 1791
	pointillism_point 1, 14, 4, 0, 0 @ 1792
	pointillism_point 49, 57, 5, 0, 1 @ 1793
	pointillism_point 59, 36, 6, 3, 0 @ 1794
	pointillism_point 20, 16, 6, 1, 1 @ 1795
	pointillism_point 24, 44, 4, 3, 0 @ 1796
	pointillism_point 4, 45, 2, 2, 1 @ 1797
	pointillism_point 26, 17, 6, 3, 1 @ 1798
	pointillism_point 15, 11, 2, 2, 0 @ 1799
	pointillism_point 14, 44, 5, 2, 0 @ 1800
	pointillism_point 33, 23, 5, 2, 0 @ 1801
	pointillism_point 22, 33, 6, 2, 1 @ 1802
	pointillism_point 62, 16, 2, 0, 0 @ 1803
	pointillism_point 10, 5, 3, 3, 0 @ 1804
	pointillism_point 59, 9, 2, 1, 1 @ 1805
	pointillism_point 38, 24, 3, 3, 0 @ 1806
	pointillism_point 35, 12, 3, 1, 0 @ 1807
	pointillism_point 51, 55, 3, 3, 1 @ 1808
	pointillism_point 9, 18, 6, 2, 1 @ 1809
	pointillism_point 61, 13, 2, 2, 1 @ 1810
	pointillism_point 54, 6, 4, 2, 0 @ 1811
	pointillism_point 51, 48, 5, 0, 1 @ 1812
	pointillism_point 59, 15, 5, 0, 0 @ 1813
	pointillism_point 52, 42, 5, 2, 0 @ 1814
	pointillism_point 2, 18, 6, 2, 1 @ 1815
	pointillism_point 9, 34, 6, 0, 1 @ 1816
	pointillism_point 59, 49, 3, 2, 0 @ 1817
	pointillism_point 51, 34, 4, 3, 1 @ 1818
	pointillism_point 61, 52, 2, 2, 1 @ 1819
	pointillism_point 20, 34, 5, 0, 0 @ 1820
	pointillism_point 40, 16, 3, 3, 0 @ 1821
	pointillism_point 33, 49, 2, 0, 0 @ 1822
	pointillism_point 45, 22, 4, 0, 1 @ 1823
	pointillism_point 30, 5, 6, 1, 1 @ 1824
	pointillism_point 15, 48, 6, 0, 1 @ 1825
	pointillism_point 14, 26, 6, 2, 1 @ 1826
	pointillism_point 56, 46, 5, 0, 0 @ 1827
	pointillism_point 38, 55, 3, 3, 0 @ 1828
	pointillism_point 43, 19, 6, 1, 1 @ 1829
	pointillism_point 31, 30, 6, 3, 1 @ 1830
	pointillism_point 10, 40, 4, 2, 0 @ 1831
	pointillism_point 50, 28, 3, 1, 0 @ 1832
	pointillism_point 31, 63, 3, 0, 1 @ 1833
	pointillism_point 57, 57, 5, 0, 1 @ 1834
	pointillism_point 44, 27, 2, 2, 0 @ 1835
	pointillism_point 21, 42, 2, 3, 1 @ 1836
	pointillism_point 50, 15, 4, 0, 1 @ 1837
	pointillism_point 48, 33, 3, 0, 0 @ 1838
	pointillism_point 35, 42, 4, 3, 1 @ 1839
	pointillism_point 61, 7, 2, 0, 0 @ 1840
	pointillism_point 11, 63, 5, 3, 1 @ 1841
	pointillism_point 49, 2, 5, 3, 0 @ 1842
	pointillism_point 8, 57, 5, 3, 1 @ 1843
	pointillism_point 63, 32, 3, 0, 0 @ 1844
	pointillism_point 45, 52, 2, 0, 1 @ 1845
	pointillism_point 46, 52, 2, 0, 0 @ 1846
	pointillism_point 38, 18, 4, 1, 1 @ 1847
	pointillism_point 37, 10, 6, 3, 1 @ 1848
	pointillism_point 52, 9, 4, 2, 1 @ 1849
	pointillism_point 10, 62, 2, 3, 0 @ 1850
	pointillism_point 26, 23, 2, 0, 1 @ 1851
	pointillism_point 56, 28, 4, 0, 0 @ 1852
	pointillism_point 17, 33, 4, 3, 0 @ 1853
	pointillism_point 5, 15, 3, 0, 0 @ 1854
	pointillism_point 38, 43, 6, 1, 0 @ 1855
	pointillism_point 10, 12, 2, 3, 0 @ 1856
	pointillism_point 3, 41, 3, 2, 1 @ 1857
	pointillism_point 41, 59, 4, 1, 1 @ 1858
	pointillism_point 22, 27, 5, 0, 1 @ 1859
	pointillism_point 7, 9, 2, 3, 1 @ 1860
	pointillism_point 23, 44, 3, 2, 0 @ 1861
	pointillism_point 53, 51, 6, 0, 0 @ 1862
	pointillism_point 23, 18, 3, 3, 0 @ 1863
	pointillism_point 61, 26, 5, 1, 1 @ 1864
	pointillism_point 33, 29, 2, 0, 0 @ 1865
	pointillism_point 10, 8, 2, 3, 1 @ 1866
	pointillism_point 20, 60, 6, 3, 0 @ 1867
	pointillism_point 40, 54, 6, 3, 0 @ 1868
	pointillism_point 59, 32, 3, 1, 1 @ 1869
	pointillism_point 19, 34, 3, 2, 1 @ 1870
	pointillism_point 19, 58, 2, 2, 1 @ 1871
	pointillism_point 2, 35, 5, 2, 0 @ 1872
	pointillism_point 62, 25, 2, 2, 0 @ 1873
	pointillism_point 57, 60, 3, 1, 0 @ 1874
	pointillism_point 16, 8, 3, 3, 0 @ 1875
	pointillism_point 10, 19, 5, 0, 1 @ 1876
	pointillism_point 63, 56, 5, 2, 0 @ 1877
	pointillism_point 7, 35, 3, 3, 1 @ 1878
	pointillism_point 25, 42, 4, 2, 0 @ 1879
	pointillism_point 20, 60, 3, 3, 1 @ 1880
	pointillism_point 13, 4, 6, 3, 1 @ 1881
	pointillism_point 26, 47, 5, 0, 0 @ 1882
	pointillism_point 42, 29, 3, 3, 0 @ 1883
	pointillism_point 17, 55, 5, 0, 1 @ 1884
	pointillism_point 40, 39, 2, 1, 0 @ 1885
	pointillism_point 13, 0, 4, 3, 0 @ 1886
	pointillism_point 10, 60, 4, 3, 0 @ 1887
	pointillism_point 31, 28, 6, 1, 1 @ 1888
	pointillism_point 4, 58, 5, 2, 0 @ 1889
	pointillism_point 36, 61, 5, 1, 1 @ 1890
	pointillism_point 38, 49, 5, 3, 1 @ 1891
	pointillism_point 19, 28, 4, 0, 1 @ 1892
	pointillism_point 62, 18, 4, 1, 1 @ 1893
	pointillism_point 54, 10, 3, 1, 0 @ 1894
	pointillism_point 45, 30, 3, 0, 1 @ 1895
	pointillism_point 5, 31, 3, 1, 1 @ 1896
	pointillism_point 30, 10, 3, 3, 1 @ 1897
	pointillism_point 32, 8, 4, 2, 0 @ 1898
	pointillism_point 44, 12, 6, 1, 1 @ 1899
	pointillism_point 29, 31, 2, 0, 1 @ 1900
	pointillism_point 14, 18, 2, 0, 0 @ 1901
	pointillism_point 39, 18, 3, 0, 1 @ 1902
	pointillism_point 42, 19, 6, 0, 1 @ 1903
	pointillism_point 28, 4, 6, 0, 0 @ 1904
	pointillism_point 26, 56, 3, 3, 1 @ 1905
	pointillism_point 44, 53, 4, 2, 1 @ 1906
	pointillism_point 7, 11, 6, 1, 1 @ 1907
	pointillism_point 45, 2, 3, 1, 0 @ 1908
	pointillism_point 42, 53, 6, 2, 1 @ 1909
	pointillism_point 22, 47, 2, 2, 0 @ 1910
	pointillism_point 17, 49, 6, 1, 1 @ 1911
	pointillism_point 44, 49, 3, 3, 0 @ 1912
	pointillism_point 60, 58, 4, 3, 1 @ 1913
	pointillism_point 60, 43, 2, 1, 0 @ 1914
	pointillism_point 39, 29, 2, 1, 0 @ 1915
	pointillism_point 54, 44, 5, 1, 1 @ 1916
	pointillism_point 37, 59, 6, 2, 1 @ 1917
	pointillism_point 18, 61, 4, 3, 1 @ 1918
	pointillism_point 19, 35, 3, 0, 1 @ 1919
	pointillism_point 51, 44, 4, 3, 0 @ 1920
	pointillism_point 9, 60, 2, 1, 0 @ 1921
	pointillism_point 21, 26, 4, 1, 1 @ 1922
	pointillism_point 33, 7, 3, 1, 0 @ 1923
	pointillism_point 34, 37, 4, 0, 0 @ 1924
	pointillism_point 25, 27, 5, 2, 0 @ 1925
	pointillism_point 58, 25, 6, 2, 1 @ 1926
	pointillism_point 5, 38, 3, 2, 1 @ 1927
	pointillism_point 35, 34, 4, 2, 1 @ 1928
	pointillism_point 14, 30, 2, 0, 1 @ 1929
	pointillism_point 19, 48, 2, 1, 0 @ 1930
	pointillism_point 44, 34, 4, 2, 1 @ 1931
	pointillism_point 10, 29, 3, 0, 0 @ 1932
	pointillism_point 35, 62, 3, 2, 1 @ 1933
	pointillism_point 2, 40, 4, 2, 1 @ 1934
	pointillism_point 33, 14, 4, 0, 0 @ 1935
	pointillism_point 33, 34, 6, 3, 1 @ 1936
	pointillism_point 24, 51, 4, 3, 1 @ 1937
	pointillism_point 35, 35, 6, 0, 1 @ 1938
	pointillism_point 36, 26, 3, 1, 0 @ 1939
	pointillism_point 62, 37, 4, 2, 0 @ 1940
	pointillism_point 36, 1, 3, 0, 0 @ 1941
	pointillism_point 52, 16, 4, 1, 0 @ 1942
	pointillism_point 7, 0, 6, 3, 1 @ 1943
	pointillism_point 6, 32, 4, 0, 0 @ 1944
	pointillism_point 58, 2, 5, 1, 1 @ 1945
	pointillism_point 7, 44, 5, 2, 0 @ 1946
	pointillism_point 9, 47, 5, 1, 0 @ 1947
	pointillism_point 1, 50, 5, 2, 0 @ 1948
	pointillism_point 0, 53, 2, 1, 1 @ 1949
	pointillism_point 43, 60, 3, 3, 1 @ 1950
	pointillism_point 54, 55, 3, 3, 0 @ 1951
	pointillism_point 32, 53, 3, 2, 1 @ 1952
	pointillism_point 12, 7, 6, 1, 1 @ 1953
	pointillism_point 22, 8, 2, 1, 0 @ 1954
	pointillism_point 63, 54, 2, 0, 1 @ 1955
	pointillism_point 11, 31, 5, 2, 1 @ 1956
	pointillism_point 33, 32, 6, 1, 1 @ 1957
	pointillism_point 23, 26, 5, 3, 0 @ 1958
	pointillism_point 22, 1, 5, 3, 1 @ 1959
	pointillism_point 47, 28, 6, 2, 0 @ 1960
	pointillism_point 41, 49, 5, 3, 0 @ 1961
	pointillism_point 59, 56, 6, 0, 1 @ 1962
	pointillism_point 13, 22, 2, 1, 0 @ 1963
	pointillism_point 7, 41, 4, 2, 0 @ 1964
	pointillism_point 51, 60, 6, 2, 0 @ 1965
	pointillism_point 62, 30, 3, 0, 0 @ 1966
	pointillism_point 48, 2, 6, 2, 0 @ 1967
	pointillism_point 42, 52, 3, 1, 1 @ 1968
	pointillism_point 46, 35, 3, 0, 0 @ 1969
	pointillism_point 52, 0, 3, 3, 1 @ 1970
	pointillism_point 32, 14, 5, 0, 0 @ 1971
	pointillism_point 21, 51, 6, 3, 1 @ 1972
	pointillism_point 39, 53, 4, 1, 1 @ 1973
	pointillism_point 55, 62, 2, 0, 1 @ 1974
	pointillism_point 50, 46, 6, 3, 0 @ 1975
	pointillism_point 58, 2, 5, 1, 1 @ 1976
	pointillism_point 0, 54, 3, 2, 1 @ 1977
	pointillism_point 19, 41, 2, 3, 0 @ 1978
	pointillism_point 8, 43, 6, 3, 1 @ 1979
	pointillism_point 8, 2, 4, 3, 1 @ 1980
	pointillism_point 50, 45, 6, 2, 0 @ 1981
	pointillism_point 48, 54, 5, 0, 1 @ 1982
	pointillism_point 46, 16, 2, 1, 0 @ 1983
	pointillism_point 60, 46, 5, 1, 0 @ 1984
	pointillism_point 4, 51, 6, 0, 0 @ 1985
	pointillism_point 63, 1, 4, 1, 0 @ 1986
	pointillism_point 55, 20, 3, 2, 1 @ 1987
	pointillism_point 39, 0, 5, 3, 1 @ 1988
	pointillism_point 12, 57, 4, 3, 0 @ 1989
	pointillism_point 39, 4, 4, 0, 1 @ 1990
	pointillism_point 25, 8, 3, 2, 1 @ 1991
	pointillism_point 1, 4, 3, 3, 0 @ 1992
	pointillism_point 39, 27, 5, 1, 1 @ 1993
	pointillism_point 49, 23, 3, 3, 1 @ 1994
	pointillism_point 7, 1, 5, 2, 1 @ 1995
	pointillism_point 46, 59, 3, 3, 1 @ 1996
	pointillism_point 52, 36, 6, 0, 1 @ 1997
	pointillism_point 50, 43, 4, 2, 0 @ 1998
	pointillism_point 14, 7, 3, 3, 0 @ 1999
	pointillism_point 15, 51, 2, 0, 0 @ 2000
	pointillism_point 22, 33, 6, 1, 0 @ 2001
	pointillism_point 57, 2, 3, 1, 0 @ 2002
	pointillism_point 51, 61, 4, 1, 0 @ 2003
	pointillism_point 12, 37, 3, 1, 0 @ 2004
	pointillism_point 41, 41, 5, 0, 0 @ 2005
	pointillism_point 58, 50, 4, 3, 0 @ 2006
	pointillism_point 11, 19, 4, 1, 0 @ 2007
	pointillism_point 31, 15, 3, 2, 0 @ 2008
	pointillism_point 4, 44, 4, 0, 0 @ 2009
	pointillism_point 57, 26, 3, 1, 1 @ 2010
	pointillism_point 26, 42, 3, 3, 1 @ 2011
	pointillism_point 36, 19, 3, 1, 0 @ 2012
	pointillism_point 49, 59, 6, 1, 1 @ 2013
	pointillism_point 57, 35, 5, 0, 0 @ 2014
	pointillism_point 49, 7, 6, 0, 1 @ 2015
	pointillism_point 31, 16, 4, 0, 0 @ 2016
	pointillism_point 41, 23, 6, 1, 0 @ 2017
	pointillism_point 38, 59, 5, 2, 1 @ 2018
	pointillism_point 2, 60, 3, 2, 0 @ 2019
	pointillism_point 14, 0, 4, 0, 0 @ 2020
	pointillism_point 20, 62, 6, 3, 1 @ 2021
	pointillism_point 1, 15, 5, 2, 1 @ 2022
	pointillism_point 6, 18, 4, 3, 1 @ 2023
	pointillism_point 48, 19, 3, 0, 1 @ 2024
	pointillism_point 0, 51, 5, 1, 0 @ 2025
	pointillism_point 12, 7, 4, 3, 1 @ 2026
	pointillism_point 17, 58, 3, 2, 0 @ 2027
	pointillism_point 21, 10, 2, 1, 1 @ 2028
	pointillism_point 31, 13, 5, 1, 0 @ 2029
	pointillism_point 55, 7, 5, 1, 0 @ 2030
	pointillism_point 52, 53, 6, 2, 0 @ 2031
	pointillism_point 40, 22, 4, 3, 1 @ 2032
	pointillism_point 6, 2, 6, 3, 0 @ 2033
	pointillism_point 9, 35, 6, 0, 0 @ 2034
	pointillism_point 20, 2, 5, 0, 0 @ 2035
	pointillism_point 57, 50, 6, 2, 0 @ 2036
	pointillism_point 36, 53, 2, 1, 0 @ 2037
	pointillism_point 18, 34, 4, 3, 0 @ 2038
	pointillism_point 9, 7, 6, 1, 1 @ 2039
	pointillism_point 15, 62, 3, 3, 0 @ 2040
	pointillism_point 0, 60, 6, 1, 1 @ 2041
	pointillism_point 16, 55, 2, 2, 0 @ 2042
	pointillism_point 58, 3, 4, 2, 1 @ 2043
	pointillism_point 45, 30, 4, 2, 0 @ 2044
	pointillism_point 54, 54, 4, 3, 0 @ 2045
	pointillism_point 31, 60, 3, 1, 0 @ 2046
	pointillism_point 55, 51, 4, 2, 1 @ 2047
	pointillism_point 35, 19, 3, 3, 1 @ 2048
	pointillism_point 51, 13, 2, 1, 1 @ 2049
	pointillism_point 37, 48, 3, 3, 0 @ 2050
	pointillism_point 23, 3, 3, 0, 0 @ 2051
	pointillism_point 24, 24, 2, 2, 0 @ 2052
	pointillism_point 48, 7, 4, 1, 0 @ 2053
	pointillism_point 62, 51, 4, 0, 1 @ 2054
	pointillism_point 20, 55, 2, 3, 0 @ 2055
	pointillism_point 22, 0, 2, 1, 0 @ 2056
	pointillism_point 44, 18, 5, 3, 1 @ 2057
	pointillism_point 37, 63, 3, 3, 0 @ 2058
	pointillism_point 36, 25, 2, 3, 0 @ 2059
	pointillism_point 22, 15, 6, 2, 1 @ 2060
	pointillism_point 45, 16, 2, 0, 1 @ 2061
	pointillism_point 36, 42, 5, 0, 0 @ 2062
	pointillism_point 25, 37, 5, 3, 0 @ 2063
	pointillism_point 12, 22, 3, 3, 1 @ 2064
	pointillism_point 56, 33, 6, 3, 0 @ 2065
	pointillism_point 61, 26, 5, 3, 1 @ 2066
	pointillism_point 59, 50, 2, 1, 0 @ 2067
	pointillism_point 54, 19, 5, 0, 1 @ 2068
	pointillism_point 14, 48, 6, 0, 1 @ 2069
	pointillism_point 25, 7, 5, 3, 1 @ 2070
	pointillism_point 37, 35, 5, 0, 0 @ 2071
	pointillism_point 32, 8, 5, 0, 1 @ 2072
	pointillism_point 42, 0, 6, 0, 0 @ 2073
	pointillism_point 48, 56, 4, 1, 1 @ 2074
	pointillism_point 30, 15, 3, 3, 1 @ 2075
	pointillism_point 59, 27, 6, 0, 0 @ 2076
	pointillism_point 58, 55, 5, 3, 1 @ 2077
	pointillism_point 57, 55, 6, 2, 1 @ 2078
	pointillism_point 57, 45, 5, 3, 1 @ 2079
	pointillism_point 31, 46, 3, 3, 0 @ 2080
	pointillism_point 26, 43, 3, 3, 0 @ 2081
	pointillism_point 20, 23, 4, 0, 0 @ 2082
	pointillism_point 47, 3, 2, 0, 1 @ 2083
	pointillism_point 29, 0, 6, 0, 0 @ 2084
	pointillism_point 23, 43, 3, 2, 1 @ 2085
	pointillism_point 53, 40, 4, 2, 1 @ 2086
	pointillism_point 59, 15, 2, 0, 1 @ 2087
	pointillism_point 9, 4, 5, 3, 0 @ 2088
	pointillism_point 35, 17, 3, 3, 0 @ 2089
	pointillism_point 19, 55, 3, 3, 0 @ 2090
	pointillism_point 55, 55, 3, 3, 0 @ 2091
	pointillism_point 7, 1, 6, 1, 0 @ 2092
	pointillism_point 20, 6, 6, 1, 0 @ 2093
	pointillism_point 17, 12, 5, 3, 0 @ 2094
	pointillism_point 54, 46, 4, 2, 0 @ 2095
	pointillism_point 21, 42, 3, 2, 0 @ 2096
	pointillism_point 34, 21, 6, 2, 0 @ 2097
	pointillism_point 44, 30, 6, 2, 1 @ 2098
	pointillism_point 34, 39, 6, 1, 1 @ 2099
	pointillism_point 25, 63, 5, 2, 1 @ 2100
	pointillism_point 33, 51, 2, 2, 1 @ 2101
	pointillism_point 38, 26, 2, 0, 1 @ 2102
	pointillism_point 22, 62, 2, 1, 0 @ 2103
	pointillism_point 43, 36, 2, 2, 1 @ 2104
	pointillism_point 60, 15, 5, 2, 1 @ 2105
	pointillism_point 49, 21, 6, 3, 0 @ 2106
	pointillism_point 63, 36, 3, 2, 1 @ 2107
	pointillism_point 37, 1, 6, 3, 1 @ 2108
	pointillism_point 51, 22, 3, 1, 0 @ 2109
	pointillism_point 31, 14, 2, 0, 0 @ 2110
	pointillism_point 47, 11, 2, 1, 0 @ 2111
	pointillism_point 42, 26, 4, 2, 1 @ 2112
	pointillism_point 23, 10, 6, 2, 1 @ 2113
	pointillism_point 9, 40, 6, 2, 1 @ 2114
	pointillism_point 2, 19, 6, 3, 0 @ 2115
	pointillism_point 52, 47, 2, 3, 1 @ 2116
	pointillism_point 3, 4, 6, 0, 1 @ 2117
	pointillism_point 62, 38, 2, 0, 1 @ 2118
	pointillism_point 53, 51, 6, 0, 1 @ 2119
	pointillism_point 34, 23, 4, 1, 1 @ 2120
	pointillism_point 29, 5, 5, 1, 1 @ 2121
	pointillism_point 46, 39, 4, 0, 0 @ 2122
	pointillism_point 3, 43, 3, 2, 1 @ 2123
	pointillism_point 1, 25, 3, 3, 0 @ 2124
	pointillism_point 14, 5, 3, 0, 0 @ 2125
	pointillism_point 22, 37, 2, 3, 1 @ 2126
	pointillism_point 2, 40, 3, 0, 0 @ 2127
	pointillism_point 25, 11, 4, 2, 0 @ 2128
	pointillism_point 62, 53, 2, 3, 0 @ 2129
	pointillism_point 46, 41, 4, 2, 1 @ 2130
	pointillism_point 62, 56, 3, 3, 0 @ 2131
	pointillism_point 58, 47, 2, 1, 0 @ 2132
	pointillism_point 20, 23, 5, 2, 1 @ 2133
	pointillism_point 17, 18, 6, 0, 0 @ 2134
	pointillism_point 21, 49, 3, 0, 0 @ 2135
	pointillism_point 8, 11, 5, 0, 1 @ 2136
	pointillism_point 45, 0, 6, 1, 1 @ 2137
	pointillism_point 44, 6, 3, 1, 0 @ 2138
	pointillism_point 20, 28, 5, 3, 0 @ 2139
	pointillism_point 4, 8, 2, 1, 0 @ 2140
	pointillism_point 27, 43, 5, 2, 1 @ 2141
	pointillism_point 42, 55, 6, 1, 1 @ 2142
	pointillism_point 16, 39, 5, 2, 0 @ 2143
	pointillism_point 29, 14, 6, 2, 0 @ 2144
	pointillism_point 32, 2, 2, 1, 0 @ 2145
	pointillism_point 30, 26, 5, 3, 0 @ 2146
	pointillism_point 7, 11, 2, 0, 0 @ 2147
	pointillism_point 54, 30, 6, 1, 1 @ 2148
	pointillism_point 43, 40, 3, 1, 1 @ 2149
	pointillism_point 49, 37, 3, 3, 1 @ 2150
	pointillism_point 56, 58, 5, 3, 1 @ 2151
	pointillism_point 57, 48, 5, 3, 1 @ 2152
	pointillism_point 18, 9, 2, 2, 0 @ 2153
	pointillism_point 14, 8, 3, 0, 1 @ 2154
	pointillism_point 0, 13, 5, 2, 0 @ 2155
	pointillism_point 27, 14, 6, 2, 0 @ 2156
	pointillism_point 17, 37, 2, 2, 1 @ 2157
	pointillism_point 12, 45, 4, 3, 0 @ 2158
	pointillism_point 54, 44, 2, 3, 0 @ 2159
	pointillism_point 49, 49, 5, 2, 0 @ 2160
	pointillism_point 3, 26, 2, 3, 0 @ 2161
	pointillism_point 28, 50, 2, 2, 0 @ 2162
	pointillism_point 10, 62, 6, 3, 0 @ 2163
	pointillism_point 51, 27, 4, 3, 1 @ 2164
	pointillism_point 31, 50, 3, 0, 0 @ 2165
	pointillism_point 51, 38, 6, 1, 1 @ 2166
	pointillism_point 26, 19, 3, 1, 0 @ 2167
	pointillism_point 15, 52, 3, 2, 0 @ 2168
	pointillism_point 53, 44, 5, 3, 1 @ 2169
	pointillism_point 56, 3, 3, 0, 0 @ 2170
	pointillism_point 21, 15, 4, 3, 1 @ 2171
	pointillism_point 49, 41, 4, 0, 0 @ 2172
	pointillism_point 40, 14, 5, 0, 0 @ 2173
	pointillism_point 49, 44, 5, 3, 0 @ 2174
	pointillism_point 21, 25, 3, 1, 1 @ 2175
	pointillism_point 16, 3, 5, 3, 1 @ 2176
	pointillism_point 46, 42, 6, 1, 0 @ 2177
	pointillism_point 42, 39, 3, 1, 1 @ 2178
	pointillism_point 54, 4, 3, 3, 0 @ 2179
	pointillism_point 59, 4, 4, 0, 1 @ 2180
	pointillism_point 7, 47, 3, 0, 1 @ 2181
	pointillism_point 39, 29, 3, 2, 1 @ 2182
	pointillism_point 60, 61, 5, 3, 0 @ 2183
	pointillism_point 37, 8, 6, 1, 0 @ 2184
	pointillism_point 59, 52, 5, 1, 0 @ 2185
	pointillism_point 12, 16, 2, 1, 1 @ 2186
	pointillism_point 37, 53, 3, 1, 0 @ 2187
	pointillism_point 47, 25, 5, 0, 0 @ 2188
	pointillism_point 23, 0, 5, 1, 1 @ 2189
	pointillism_point 10, 28, 2, 3, 1 @ 2190
	pointillism_point 10, 17, 3, 1, 1 @ 2191
	pointillism_point 53, 19, 6, 3, 1 @ 2192
	pointillism_point 41, 28, 5, 0, 0 @ 2193
	pointillism_point 12, 49, 6, 2, 1 @ 2194
	pointillism_point 60, 16, 3, 1, 0 @ 2195
	pointillism_point 27, 58, 5, 2, 1 @ 2196
	pointillism_point 58, 28, 3, 0, 0 @ 2197
	pointillism_point 34, 16, 5, 2, 1 @ 2198
	pointillism_point 28, 60, 2, 1, 0 @ 2199
	pointillism_point 23, 24, 5, 1, 0 @ 2200
	pointillism_point 11, 43, 5, 3, 1 @ 2201
	pointillism_point 45, 4, 5, 3, 0 @ 2202
	pointillism_point 60, 19, 4, 1, 1 @ 2203
	pointillism_point 1, 28, 5, 3, 0 @ 2204
	pointillism_point 20, 22, 4, 1, 0 @ 2205
	pointillism_point 12, 36, 2, 1, 1 @ 2206
	pointillism_point 53, 55, 6, 2, 0 @ 2207
	pointillism_point 27, 48, 3, 3, 0 @ 2208
	pointillism_point 58, 28, 4, 0, 0 @ 2209
	pointillism_point 6, 6, 6, 3, 0 @ 2210
	pointillism_point 9, 21, 3, 1, 0 @ 2211
	pointillism_point 27, 26, 4, 3, 1 @ 2212
	pointillism_point 15, 51, 6, 2, 1 @ 2213
	pointillism_point 55, 6, 4, 1, 1 @ 2214
	pointillism_point 58, 18, 3, 2, 1 @ 2215
	pointillism_point 0, 22, 5, 0, 1 @ 2216
	pointillism_point 14, 29, 6, 2, 1 @ 2217
	pointillism_point 63, 56, 2, 3, 0 @ 2218
	pointillism_point 42, 60, 6, 2, 0 @ 2219
	pointillism_point 19, 50, 2, 0, 0 @ 2220
	pointillism_point 23, 44, 6, 3, 1 @ 2221
	pointillism_point 41, 42, 3, 3, 0 @ 2222
	pointillism_point 53, 47, 5, 2, 1 @ 2223
	pointillism_point 60, 42, 2, 0, 1 @ 2224
	pointillism_point 40, 19, 4, 0, 1 @ 2225
	pointillism_point 25, 30, 6, 2, 0 @ 2226
	pointillism_point 12, 6, 5, 2, 1 @ 2227
	pointillism_point 9, 4, 3, 2, 0 @ 2228
	pointillism_point 29, 47, 4, 3, 0 @ 2229
	pointillism_point 57, 7, 2, 3, 0 @ 2230
	pointillism_point 20, 4, 5, 2, 1 @ 2231
	pointillism_point 58, 47, 5, 3, 0 @ 2232
	pointillism_point 41, 21, 6, 2, 1 @ 2233
	pointillism_point 36, 2, 6, 3, 0 @ 2234
	pointillism_point 63, 2, 3, 1, 0 @ 2235
	pointillism_point 15, 24, 4, 2, 0 @ 2236
	pointillism_point 22, 29, 3, 0, 1 @ 2237
	pointillism_point 20, 22, 2, 0, 0 @ 2238
	pointillism_point 41, 27, 2, 1, 1 @ 2239
	pointillism_point 21, 14, 3, 0, 1 @ 2240
	pointillism_point 58, 46, 5, 1, 1 @ 2241
	pointillism_point 8, 48, 2, 2, 1 @ 2242
	pointillism_point 53, 22, 6, 0, 0 @ 2243
	pointillism_point 46, 24, 6, 2, 1 @ 2244
	pointillism_point 59, 11, 3, 2, 0 @ 2245
	pointillism_point 58, 24, 2, 1, 1 @ 2246
	pointillism_point 41, 19, 3, 3, 0 @ 2247
	pointillism_point 32, 19, 4, 3, 1 @ 2248
	pointillism_point 4, 29, 6, 2, 0 @ 2249
	pointillism_point 0, 56, 3, 0, 1 @ 2250
	pointillism_point 8, 57, 6, 1, 0 @ 2251
	pointillism_point 32, 16, 4, 3, 0 @ 2252
	pointillism_point 8, 2, 5, 0, 0 @ 2253
	pointillism_point 63, 15, 2, 3, 0 @ 2254
	pointillism_point 48, 31, 3, 0, 1 @ 2255
	pointillism_point 32, 45, 2, 0, 0 @ 2256
	pointillism_point 56, 23, 3, 2, 0 @ 2257
	pointillism_point 24, 49, 4, 3, 1 @ 2258
	pointillism_point 51, 56, 6, 0, 0 @ 2259
	pointillism_point 22, 51, 4, 1, 1 @ 2260
	pointillism_point 0, 1, 6, 3, 0 @ 2261
	pointillism_point 13, 2, 4, 1, 1 @ 2262
	pointillism_point 57, 4, 3, 3, 1 @ 2263
	pointillism_point 14, 48, 4, 2, 0 @ 2264
	pointillism_point 6, 1, 5, 2, 0 @ 2265
	pointillism_point 52, 51, 6, 2, 1 @ 2266
	pointillism_point 22, 52, 5, 3, 0 @ 2267
	pointillism_point 50, 22, 4, 2, 0 @ 2268
	pointillism_point 38, 57, 6, 2, 0 @ 2269
	pointillism_point 31, 60, 3, 2, 1 @ 2270
	pointillism_point 40, 29, 6, 3, 1 @ 2271
	pointillism_point 23, 21, 5, 1, 1 @ 2272
	pointillism_point 39, 57, 6, 0, 0 @ 2273
	pointillism_point 11, 27, 3, 0, 0 @ 2274
	pointillism_point 53, 32, 5, 2, 1 @ 2275
	pointillism_point 11, 53, 3, 2, 0 @ 2276
	pointillism_point 3, 14, 4, 0, 1 @ 2277
	pointillism_point 6, 12, 4, 0, 0 @ 2278
	pointillism_point 2, 24, 6, 2, 0 @ 2279
	pointillism_point 30, 54, 5, 2, 1 @ 2280
	pointillism_point 22, 12, 3, 0, 1 @ 2281
	pointillism_point 37, 9, 5, 2, 0 @ 2282
	pointillism_point 55, 5, 5, 3, 0 @ 2283
	pointillism_point 46, 43, 5, 2, 0 @ 2284
	pointillism_point 36, 26, 2, 2, 0 @ 2285
	pointillism_point 39, 4, 2, 0, 0 @ 2286
	pointillism_point 50, 56, 6, 1, 1 @ 2287
	pointillism_point 55, 21, 6, 2, 1 @ 2288
	pointillism_point 17, 63, 3, 2, 1 @ 2289
	pointillism_point 35, 35, 3, 3, 1 @ 2290
	pointillism_point 41, 63, 3, 2, 1 @ 2291
	pointillism_point 26, 60, 5, 1, 1 @ 2292
	pointillism_point 27, 44, 5, 2, 0 @ 2293
	pointillism_point 56, 59, 6, 3, 0 @ 2294
	pointillism_point 4, 19, 6, 1, 1 @ 2295
	pointillism_point 44, 20, 2, 1, 0 @ 2296
	pointillism_point 26, 9, 3, 1, 1 @ 2297
	pointillism_point 54, 17, 4, 2, 0 @ 2298
	pointillism_point 58, 63, 2, 0, 1 @ 2299
	pointillism_point 1, 14, 5, 1, 1 @ 2300
	pointillism_point 59, 3, 5, 1, 0 @ 2301
	pointillism_point 8, 13, 5, 1, 1 @ 2302
	pointillism_point 43, 19, 4, 3, 1 @ 2303
	pointillism_point 58, 60, 3, 2, 0 @ 2304
	pointillism_point 58, 21, 5, 1, 0 @ 2305
	pointillism_point 36, 0, 2, 3, 1 @ 2306
	pointillism_point 62, 10, 2, 2, 1 @ 2307
	pointillism_point 12, 41, 5, 2, 1 @ 2308
	pointillism_point 31, 21, 6, 0, 0 @ 2309
	pointillism_point 53, 24, 3, 0, 1 @ 2310
	pointillism_point 61, 55, 6, 3, 1 @ 2311
	pointillism_point 18, 56, 3, 1, 1 @ 2312
	pointillism_point 59, 2, 4, 0, 0 @ 2313
	pointillism_point 8, 33, 3, 0, 1 @ 2314
	pointillism_point 46, 54, 3, 2, 1 @ 2315
	pointillism_point 21, 61, 4, 2, 0 @ 2316
	pointillism_point 34, 12, 4, 3, 1 @ 2317
	pointillism_point 54, 63, 6, 1, 1 @ 2318
	pointillism_point 51, 18, 2, 0, 1 @ 2319
	pointillism_point 26, 25, 3, 3, 1 @ 2320
	pointillism_point 43, 36, 2, 1, 0 @ 2321
	pointillism_point 17, 42, 3, 0, 0 @ 2322
	pointillism_point 37, 50, 5, 1, 0 @ 2323
	pointillism_point 44, 26, 2, 1, 0 @ 2324
	pointillism_point 38, 6, 2, 0, 0 @ 2325
	pointillism_point 17, 41, 6, 1, 1 @ 2326
	pointillism_point 44, 9, 2, 2, 0 @ 2327
	pointillism_point 43, 18, 5, 1, 1 @ 2328
	pointillism_point 29, 3, 4, 2, 0 @ 2329
	pointillism_point 0, 18, 2, 2, 1 @ 2330
	pointillism_point 34, 61, 4, 3, 0 @ 2331
	pointillism_point 21, 55, 3, 1, 0 @ 2332
	pointillism_point 15, 18, 6, 3, 1 @ 2333
	pointillism_point 36, 1, 3, 0, 0 @ 2334
	pointillism_point 42, 23, 2, 1, 1 @ 2335
	pointillism_point 20, 59, 5, 0, 1 @ 2336
	pointillism_point 42, 25, 6, 1, 0 @ 2337
	pointillism_point 45, 23, 2, 3, 1 @ 2338
	pointillism_point 11, 44, 6, 1, 1 @ 2339
	pointillism_point 7, 45, 6, 2, 0 @ 2340
	pointillism_point 7, 56, 3, 2, 1 @ 2341
	pointillism_point 31, 54, 4, 1, 0 @ 2342
	pointillism_point 17, 10, 2, 3, 1 @ 2343
	pointillism_point 20, 17, 2, 1, 1 @ 2344
	pointillism_point 42, 23, 4, 2, 1 @ 2345
	pointillism_point 1, 58, 3, 2, 0 @ 2346
	pointillism_point 38, 39, 6, 0, 0 @ 2347
	pointillism_point 45, 59, 6, 2, 1 @ 2348
	pointillism_point 58, 48, 6, 2, 0 @ 2349
	pointillism_point 6, 58, 3, 2, 0 @ 2350
	pointillism_point 45, 5, 2, 1, 1 @ 2351
	pointillism_point 33, 50, 2, 1, 0 @ 2352
	pointillism_point 62, 30, 5, 2, 0 @ 2353
	pointillism_point 58, 63, 5, 2, 1 @ 2354
	pointillism_point 32, 42, 6, 2, 0 @ 2355
	pointillism_point 38, 3, 3, 1, 0 @ 2356
	pointillism_point 25, 39, 5, 3, 0 @ 2357
	pointillism_point 49, 4, 4, 3, 0 @ 2358
	pointillism_point 42, 63, 6, 0, 0 @ 2359
	pointillism_point 37, 35, 5, 1, 0 @ 2360
	pointillism_point 8, 8, 6, 2, 1 @ 2361
	pointillism_point 44, 48, 3, 3, 0 @ 2362
	pointillism_point 8, 5, 3, 0, 0 @ 2363
	pointillism_point 6, 9, 5, 2, 1 @ 2364
	pointillism_point 25, 0, 4, 3, 1 @ 2365
	pointillism_point 13, 16, 3, 0, 1 @ 2366
	pointillism_point 28, 0, 2, 1, 1 @ 2367
	pointillism_point 61, 11, 4, 2, 0 @ 2368
	pointillism_point 46, 31, 2, 3, 0 @ 2369
	pointillism_point 61, 24, 6, 2, 0 @ 2370
	pointillism_point 18, 30, 2, 2, 1 @ 2371
	pointillism_point 21, 57, 4, 2, 1 @ 2372
	pointillism_point 51, 15, 2, 3, 1 @ 2373
	pointillism_point 26, 28, 3, 1, 1 @ 2374
	pointillism_point 55, 41, 3, 1, 1 @ 2375
	pointillism_point 59, 56, 2, 1, 0 @ 2376
	pointillism_point 29, 34, 6, 2, 0 @ 2377
	pointillism_point 38, 10, 6, 0, 1 @ 2378
	pointillism_point 22, 45, 2, 1, 1 @ 2379
	pointillism_point 13, 32, 4, 3, 1 @ 2380
	pointillism_point 36, 29, 2, 3, 0 @ 2381
	pointillism_point 46, 43, 3, 0, 0 @ 2382
	pointillism_point 22, 42, 3, 1, 1 @ 2383
	pointillism_point 36, 23, 6, 3, 0 @ 2384
	pointillism_point 2, 5, 5, 1, 1 @ 2385
	pointillism_point 55, 26, 2, 3, 1 @ 2386
	pointillism_point 17, 61, 5, 2, 0 @ 2387
	pointillism_point 30, 47, 4, 1, 0 @ 2388
	pointillism_point 44, 41, 3, 1, 0 @ 2389
	pointillism_point 47, 4, 4, 2, 1 @ 2390
	pointillism_point 54, 12, 6, 2, 1 @ 2391
	pointillism_point 48, 62, 2, 1, 0 @ 2392
	pointillism_point 17, 48, 6, 3, 1 @ 2393
	pointillism_point 18, 33, 5, 3, 0 @ 2394
	pointillism_point 33, 48, 2, 3, 1 @ 2395
	pointillism_point 44, 61, 4, 2, 0 @ 2396
	pointillism_point 17, 35, 2, 2, 0 @ 2397
	pointillism_point 26, 50, 2, 3, 1 @ 2398
	pointillism_point 57, 39, 3, 0, 0 @ 2399
	pointillism_point 15, 36, 3, 0, 1 @ 2400
	pointillism_point 0, 61, 6, 3, 1 @ 2401
	pointillism_point 44, 60, 3, 2, 0 @ 2402
	pointillism_point 11, 57, 4, 1, 1 @ 2403
	pointillism_point 14, 4, 3, 3, 1 @ 2404
	pointillism_point 28, 49, 2, 2, 0 @ 2405
	pointillism_point 0, 4, 2, 2, 1 @ 2406
	pointillism_point 38, 42, 5, 1, 0 @ 2407
	pointillism_point 32, 37, 5, 1, 0 @ 2408
	pointillism_point 11, 60, 6, 1, 1 @ 2409
	pointillism_point 17, 11, 5, 3, 0 @ 2410
	pointillism_point 55, 34, 5, 3, 0 @ 2411
	pointillism_point 14, 34, 4, 3, 0 @ 2412
	pointillism_point 24, 45, 4, 3, 1 @ 2413
	pointillism_point 6, 12, 3, 2, 0 @ 2414
	pointillism_point 38, 24, 5, 3, 1 @ 2415
	pointillism_point 58, 1, 5, 1, 0 @ 2416
	pointillism_point 47, 49, 6, 2, 0 @ 2417
	pointillism_point 31, 52, 3, 1, 0 @ 2418
	pointillism_point 49, 5, 2, 0, 0 @ 2419
	pointillism_point 46, 23, 6, 2, 0 @ 2420
	pointillism_point 24, 34, 4, 1, 1 @ 2421
	pointillism_point 35, 33, 6, 1, 0 @ 2422
	pointillism_point 7, 8, 4, 1, 0 @ 2423
	pointillism_point 38, 28, 4, 1, 0 @ 2424
	pointillism_point 49, 18, 5, 3, 1 @ 2425
	pointillism_point 8, 31, 2, 0, 0 @ 2426
	pointillism_point 39, 21, 5, 1, 0 @ 2427
	pointillism_point 31, 11, 4, 3, 0 @ 2428
	pointillism_point 47, 20, 6, 2, 1 @ 2429
	pointillism_point 36, 31, 4, 3, 0 @ 2430
	pointillism_point 59, 35, 6, 1, 1 @ 2431
	pointillism_point 32, 62, 5, 2, 1 @ 2432
	pointillism_point 23, 12, 2, 2, 1 @ 2433
	pointillism_point 19, 57, 3, 1, 0 @ 2434
	pointillism_point 48, 20, 4, 2, 1 @ 2435
	pointillism_point 9, 7, 2, 3, 1 @ 2436
	pointillism_point 56, 56, 3, 3, 1 @ 2437
	pointillism_point 41, 36, 4, 3, 1 @ 2438
	pointillism_point 23, 39, 5, 0, 0 @ 2439
	pointillism_point 27, 18, 5, 1, 0 @ 2440
	pointillism_point 43, 61, 5, 2, 1 @ 2441
	pointillism_point 25, 52, 3, 2, 0 @ 2442
	pointillism_point 1, 29, 2, 0, 0 @ 2443
	pointillism_point 8, 57, 2, 0, 1 @ 2444
	pointillism_point 14, 54, 3, 1, 1 @ 2445
	pointillism_point 38, 19, 2, 0, 0 @ 2446
	pointillism_point 22, 40, 3, 3, 0 @ 2447
	pointillism_point 60, 40, 2, 3, 1 @ 2448
	pointillism_point 62, 57, 6, 2, 0 @ 2449
	pointillism_point 10, 3, 5, 3, 0 @ 2450
	pointillism_point 55, 26, 2, 1, 1 @ 2451
	pointillism_point 43, 51, 4, 3, 0 @ 2452
	pointillism_point 19, 44, 4, 0, 1 @ 2453
	pointillism_point 37, 20, 2, 0, 0 @ 2454
	pointillism_point 22, 11, 6, 2, 1 @ 2455
	pointillism_point 29, 53, 6, 1, 1 @ 2456
	pointillism_point 33, 8, 6, 1, 1 @ 2457
	pointillism_point 40, 33, 3, 1, 0 @ 2458
	pointillism_point 18, 12, 3, 1, 1 @ 2459
	pointillism_point 54, 42, 3, 0, 1 @ 2460
	pointillism_point 44, 43, 4, 1, 1 @ 2461
	pointillism_point 1, 15, 4, 3, 0 @ 2462
	pointillism_point 23, 12, 3, 0, 0 @ 2463
	pointillism_point 9, 15, 2, 0, 1 @ 2464
	pointillism_point 43, 36, 3, 2, 0 @ 2465
	pointillism_point 9, 9, 2, 2, 1 @ 2466
	pointillism_point 54, 8, 2, 1, 1 @ 2467
	pointillism_point 32, 57, 4, 0, 1 @ 2468
	pointillism_point 0, 58, 3, 3, 1 @ 2469
	pointillism_point 43, 54, 6, 0, 1 @ 2470
	pointillism_point 2, 55, 2, 1, 1 @ 2471
	pointillism_point 4, 52, 6, 2, 1 @ 2472
	pointillism_point 55, 61, 3, 1, 0 @ 2473
	pointillism_point 23, 61, 2, 1, 1 @ 2474
	pointillism_point 43, 54, 5, 3, 1 @ 2475
	pointillism_point 19, 30, 2, 1, 1 @ 2476
	pointillism_point 62, 17, 6, 1, 1 @ 2477
	pointillism_point 39, 58, 5, 2, 1 @ 2478
	pointillism_point 30, 49, 3, 1, 0 @ 2479
	pointillism_point 3, 3, 5, 2, 1 @ 2480
	pointillism_point 37, 55, 3, 3, 1 @ 2481
	pointillism_point 17, 1, 4, 1, 0 @ 2482
	pointillism_point 28, 18, 2, 3, 1 @ 2483
	pointillism_point 48, 58, 6, 0, 0 @ 2484
	pointillism_point 23, 29, 5, 0, 1 @ 2485
	pointillism_point 14, 19, 4, 3, 1 @ 2486
	pointillism_point 26, 46, 4, 2, 0 @ 2487
	pointillism_point 45, 0, 3, 2, 0 @ 2488
	pointillism_point 23, 40, 3, 2, 1 @ 2489
	pointillism_point 9, 31, 5, 3, 0 @ 2490
	pointillism_point 26, 45, 4, 3, 0 @ 2491
	pointillism_point 10, 19, 6, 1, 0 @ 2492
	pointillism_point 62, 0, 4, 3, 1 @ 2493
	pointillism_point 11, 59, 6, 0, 0 @ 2494
	pointillism_point 8, 58, 5, 2, 1 @ 2495
	pointillism_point 34, 18, 3, 3, 0 @ 2496
	pointillism_point 52, 29, 5, 1, 1 @ 2497
	pointillism_point 38, 34, 6, 2, 1 @ 2498
	pointillism_point 23, 44, 2, 3, 1 @ 2499
	pointillism_point 41, 19, 5, 2, 1 @ 2500
	pointillism_point 45, 16, 2, 0, 0 @ 2501
	pointillism_point 32, 49, 4, 1, 1 @ 2502
	pointillism_point 30, 51, 3, 0, 0 @ 2503
	pointillism_point 51, 6, 5, 2, 1 @ 2504
	pointillism_point 38, 20, 4, 3, 1 @ 2505
	pointillism_point 34, 29, 5, 1, 0 @ 2506
	pointillism_point 45, 6, 3, 0, 0 @ 2507
	pointillism_point 7, 9, 5, 3, 0 @ 2508
	pointillism_point 33, 21, 5, 3, 0 @ 2509
	pointillism_point 33, 56, 4, 1, 1 @ 2510
	pointillism_point 53, 11, 6, 2, 0 @ 2511
	pointillism_point 36, 11, 4, 1, 0 @ 2512
	pointillism_point 30, 1, 2, 3, 1 @ 2513
	pointillism_point 11, 36, 2, 0, 1 @ 2514
	pointillism_point 23, 7, 4, 0, 0 @ 2515
	pointillism_point 20, 37, 6, 1, 0 @ 2516
	pointillism_point 26, 14, 5, 3, 1 @ 2517
	pointillism_point 53, 23, 3, 3, 1 @ 2518
	pointillism_point 12, 8, 4, 0, 1 @ 2519
	pointillism_point 48, 53, 3, 3, 1 @ 2520
	pointillism_point 12, 11, 4, 0, 0 @ 2521
	pointillism_point 4, 16, 2, 0, 1 @ 2522
	pointillism_point 53, 17, 3, 3, 0 @ 2523
	pointillism_point 51, 61, 2, 3, 0 @ 2524
	pointillism_point 30, 43, 3, 2, 1 @ 2525
	pointillism_point 26, 25, 2, 0, 0 @ 2526
	pointillism_point 4, 6, 4, 1, 0 @ 2527
	pointillism_point 3, 61, 4, 2, 0 @ 2528
	pointillism_point 42, 14, 6, 2, 1 @ 2529
	pointillism_point 3, 62, 2, 3, 1 @ 2530
	pointillism_point 11, 24, 6, 3, 0 @ 2531
	pointillism_point 61, 13, 4, 3, 0 @ 2532
	pointillism_point 53, 18, 4, 0, 0 @ 2533
	pointillism_point 31, 13, 2, 3, 0 @ 2534
	pointillism_point 35, 50, 3, 1, 0 @ 2535
	pointillism_point 0, 61, 4, 3, 0 @ 2536
	pointillism_point 48, 25, 6, 3, 0 @ 2537
	pointillism_point 18, 14, 4, 1, 1 @ 2538
	pointillism_point 1, 35, 5, 0, 0 @ 2539
	pointillism_point 59, 49, 2, 0, 1 @ 2540
	pointillism_point 45, 28, 6, 3, 0 @ 2541
	pointillism_point 42, 5, 2, 3, 0 @ 2542
	pointillism_point 20, 14, 6, 0, 0 @ 2543
	pointillism_point 58, 55, 3, 0, 1 @ 2544
	pointillism_point 31, 48, 4, 2, 1 @ 2545
	pointillism_point 16, 38, 5, 3, 1 @ 2546
	pointillism_point 34, 17, 3, 3, 1 @ 2547
	pointillism_point 46, 43, 3, 3, 0 @ 2548
	pointillism_point 22, 22, 4, 0, 1 @ 2549
	pointillism_point 50, 24, 6, 2, 1 @ 2550
	pointillism_point 35, 50, 3, 1, 0 @ 2551
	pointillism_point 61, 13, 3, 0, 1 @ 2552
	pointillism_point 57, 9, 4, 1, 1 @ 2553
	pointillism_point 48, 46, 4, 2, 0 @ 2554
	pointillism_point 30, 15, 4, 2, 0 @ 2555
	pointillism_point 9, 33, 6, 0, 1 @ 2556
	pointillism_point 5, 3, 2, 0, 1 @ 2557
	pointillism_point 5, 34, 5, 1, 0 @ 2558
	pointillism_point 3, 7, 6, 3, 1 @ 2559
	pointillism_point 4, 8, 2, 1, 1 @ 2560
	pointillism_point 5, 16, 6, 2, 0 @ 2561
	pointillism_point 55, 20, 5, 0, 1 @ 2562
	pointillism_point 10, 36, 6, 1, 0 @ 2563
	pointillism_point 52, 30, 3, 1, 1 @ 2564
	pointillism_point 18, 23, 5, 3, 0 @ 2565
	pointillism_point 1, 2, 2, 1, 1 @ 2566
	pointillism_point 10, 12, 2, 0, 1 @ 2567
	pointillism_point 2, 20, 2, 1, 1 @ 2568
	pointillism_point 13, 37, 4, 1, 1 @ 2569
	pointillism_point 0, 7, 3, 1, 0 @ 2570
	pointillism_point 28, 40, 6, 2, 1 @ 2571
	pointillism_point 8, 14, 5, 2, 0 @ 2572
	pointillism_point 27, 60, 2, 2, 1 @ 2573
	pointillism_point 28, 25, 3, 2, 1 @ 2574
	pointillism_point 50, 19, 3, 1, 0 @ 2575
	pointillism_point 28, 0, 6, 3, 1 @ 2576
	pointillism_point 34, 27, 6, 2, 1 @ 2577
	pointillism_point 57, 62, 2, 2, 0 @ 2578
	pointillism_point 50, 6, 6, 0, 1 @ 2579
	pointillism_point 23, 5, 5, 1, 1 @ 2580
	pointillism_point 1, 15, 4, 0, 0 @ 2581
	pointillism_point 30, 15, 6, 2, 0 @ 2582
	pointillism_point 24, 3, 3, 3, 1 @ 2583
	pointillism_point 43, 0, 2, 2, 0 @ 2584
	pointillism_point 21, 58, 6, 0, 0 @ 2585
	pointillism_point 37, 48, 4, 0, 1 @ 2586
	pointillism_point 11, 0, 6, 3, 1 @ 2587
	pointillism_point 36, 55, 3, 2, 1 @ 2588
	pointillism_point 41, 33, 2, 3, 0 @ 2589
	pointillism_point 36, 15, 5, 2, 0 @ 2590
	pointillism_point 62, 21, 6, 3, 0 @ 2591
	pointillism_point 60, 45, 4, 1, 1 @ 2592
	pointillism_point 61, 60, 2, 3, 1 @ 2593
	pointillism_point 26, 28, 2, 1, 1 @ 2594
	pointillism_point 10, 41, 4, 1, 0 @ 2595
	pointillism_point 37, 63, 4, 3, 0 @ 2596
	pointillism_point 59, 57, 5, 3, 1 @ 2597
	pointillism_point 29, 8, 2, 3, 0 @ 2598
	pointillism_point 11, 25, 2, 2, 0 @ 2599
	pointillism_point 18, 1, 5, 2, 0 @ 2600
	pointillism_point 53, 17, 5, 1, 0 @ 2601
	pointillism_point 2, 0, 2, 1, 1 @ 2602
	pointillism_point 57, 42, 6, 2, 1 @ 2603
	pointillism_point 7, 26, 2, 0, 1 @ 2604
	pointillism_point 36, 14, 3, 3, 0 @ 2605
	pointillism_point 14, 44, 2, 2, 1 @ 2606
	pointillism_point 8, 49, 3, 1, 1 @ 2607
	pointillism_point 33, 29, 4, 3, 0 @ 2608
	pointillism_point 29, 28, 5, 1, 0 @ 2609
	pointillism_point 29, 36, 2, 1, 1 @ 2610
	pointillism_point 1, 0, 3, 0, 0 @ 2611
	pointillism_point 40, 42, 6, 3, 1 @ 2612
	pointillism_point 21, 15, 2, 1, 1 @ 2613
	pointillism_point 16, 50, 6, 3, 0 @ 2614
	pointillism_point 34, 19, 6, 0, 1 @ 2615
	pointillism_point 19, 5, 3, 3, 0 @ 2616
	pointillism_point 23, 53, 6, 2, 1 @ 2617
	pointillism_point 59, 14, 4, 2, 0 @ 2618
	pointillism_point 53, 58, 3, 2, 1 @ 2619
	pointillism_point 27, 54, 3, 1, 1 @ 2620
	pointillism_point 3, 29, 4, 2, 0 @ 2621
	pointillism_point 15, 22, 6, 0, 0 @ 2622
	pointillism_point 45, 9, 4, 2, 1 @ 2623
	pointillism_point 5, 33, 2, 1, 1 @ 2624
	pointillism_point 10, 39, 6, 3, 0 @ 2625
	pointillism_point 4, 13, 3, 2, 0 @ 2626
	pointillism_point 6, 62, 4, 0, 1 @ 2627
	pointillism_point 42, 39, 6, 1, 1 @ 2628
	pointillism_point 40, 14, 2, 2, 1 @ 2629
	pointillism_point 11, 23, 3, 2, 1 @ 2630
	pointillism_point 29, 50, 5, 2, 1 @ 2631
	pointillism_point 8, 61, 5, 0, 1 @ 2632
	pointillism_point 33, 50, 2, 3, 1 @ 2633
	pointillism_point 51, 49, 4, 1, 0 @ 2634
	pointillism_point 14, 3, 4, 0, 1 @ 2635
	pointillism_point 13, 11, 2, 3, 0 @ 2636
	pointillism_point 62, 42, 5, 3, 0 @ 2637
	pointillism_point 25, 54, 5, 1, 0 @ 2638
	pointillism_point 13, 0, 2, 2, 0 @ 2639
	pointillism_point 34, 7, 6, 3, 0 @ 2640
	pointillism_point 10, 9, 2, 2, 1 @ 2641
	pointillism_point 20, 16, 4, 1, 0 @ 2642
	pointillism_point 7, 22, 5, 2, 0 @ 2643
	pointillism_point 54, 19, 2, 2, 1 @ 2644
	pointillism_point 9, 47, 3, 1, 1 @ 2645
	pointillism_point 32, 59, 5, 3, 0 @ 2646
	pointillism_point 58, 58, 2, 3, 0 @ 2647
	pointillism_point 13, 21, 5, 1, 0 @ 2648
	pointillism_point 57, 19, 5, 1, 1 @ 2649
	pointillism_point 11, 1, 5, 1, 0 @ 2650
	pointillism_point 19, 23, 3, 3, 0 @ 2651
	pointillism_point 8, 23, 3, 3, 0 @ 2652
	pointillism_point 12, 15, 6, 2, 0 @ 2653
	pointillism_point 31, 49, 2, 1, 0 @ 2654
	pointillism_point 7, 58, 3, 2, 1 @ 2655
	pointillism_point 53, 30, 2, 1, 0 @ 2656
	pointillism_point 36, 44, 2, 2, 1 @ 2657
	pointillism_point 14, 33, 3, 0, 1 @ 2658
	pointillism_point 52, 59, 6, 1, 1 @ 2659
	pointillism_point 25, 15, 5, 0, 0 @ 2660
	pointillism_point 16, 47, 5, 3, 0 @ 2661
	pointillism_point 35, 39, 6, 0, 1 @ 2662
	pointillism_point 57, 46, 3, 0, 0 @ 2663
	pointillism_point 60, 63, 4, 2, 0 @ 2664
	pointillism_point 7, 35, 6, 0, 0 @ 2665
	pointillism_point 40, 19, 6, 2, 1 @ 2666
	pointillism_point 19, 10, 2, 0, 0 @ 2667
	pointillism_point 53, 25, 6, 1, 1 @ 2668
	pointillism_point 35, 40, 5, 0, 1 @ 2669
	pointillism_point 19, 47, 3, 1, 0 @ 2670
	pointillism_point 58, 25, 2, 2, 0 @ 2671
	pointillism_point 55, 54, 4, 3, 0 @ 2672
	pointillism_point 32, 59, 2, 2, 1 @ 2673
	pointillism_point 55, 57, 2, 0, 0 @ 2674
	pointillism_point 60, 33, 6, 2, 0 @ 2675
	pointillism_point 28, 56, 6, 0, 0 @ 2676
	pointillism_point 21, 7, 4, 3, 0 @ 2677
	pointillism_point 39, 33, 3, 0, 1 @ 2678
	pointillism_point 24, 17, 4, 1, 1 @ 2679
	pointillism_point 48, 40, 6, 3, 1 @ 2680
	pointillism_point 50, 45, 3, 3, 1 @ 2681
	pointillism_point 44, 63, 6, 0, 0 @ 2682
	pointillism_point 29, 47, 4, 3, 0 @ 2683
	pointillism_point 1, 17, 3, 2, 0 @ 2684
	pointillism_point 59, 15, 2, 1, 0 @ 2685
	pointillism_point 42, 23, 4, 3, 1 @ 2686
	pointillism_point 5, 0, 3, 1, 1 @ 2687
	pointillism_point 37, 28, 6, 1, 0 @ 2688
	pointillism_point 4, 34, 5, 2, 1 @ 2689
	pointillism_point 16, 15, 4, 2, 1 @ 2690
	pointillism_point 13, 57, 6, 0, 0 @ 2691
	pointillism_point 11, 46, 4, 3, 1 @ 2692
	pointillism_point 45, 52, 2, 2, 1 @ 2693
	pointillism_point 62, 48, 6, 3, 0 @ 2694
	pointillism_point 22, 38, 5, 1, 0 @ 2695
	pointillism_point 5, 63, 5, 1, 1 @ 2696
	pointillism_point 32, 59, 5, 3, 0 @ 2697
	pointillism_point 59, 28, 5, 3, 1 @ 2698
	pointillism_point 1, 24, 2, 3, 0 @ 2699
	pointillism_point 22, 61, 2, 0, 0 @ 2700
	pointillism_point 10, 31, 3, 0, 0 @ 2701
	pointillism_point 23, 15, 4, 1, 0 @ 2702
	pointillism_point 6, 19, 2, 0, 1 @ 2703
	pointillism_point 56, 33, 2, 3, 1 @ 2704
	pointillism_point 23, 10, 6, 3, 1 @ 2705
	pointillism_point 28, 25, 6, 0, 0 @ 2706
	pointillism_point 22, 56, 6, 0, 1 @ 2707
	pointillism_point 48, 16, 6, 3, 0 @ 2708
	pointillism_point 49, 47, 4, 3, 0 @ 2709
	pointillism_point 60, 27, 4, 1, 1 @ 2710
	pointillism_point 51, 47, 3, 0, 1 @ 2711
	pointillism_point 22, 53, 4, 2, 1 @ 2712
	pointillism_point 58, 24, 3, 3, 1 @ 2713
	pointillism_point 55, 1, 3, 3, 0 @ 2714
	pointillism_point 13, 24, 2, 1, 0 @ 2715
	pointillism_point 31, 28, 3, 1, 1 @ 2716
	pointillism_point 7, 52, 5, 2, 1 @ 2717
	pointillism_point 11, 63, 6, 1, 1 @ 2718
	pointillism_point 30, 52, 3, 2, 1 @ 2719
	pointillism_point 44, 19, 5, 2, 0 @ 2720
	pointillism_point 32, 32, 2, 1, 1 @ 2721
	pointillism_point 32, 15, 6, 0, 1 @ 2722
	pointillism_point 8, 15, 4, 2, 0 @ 2723
	pointillism_point 24, 61, 3, 2, 0 @ 2724
	pointillism_point 54, 52, 4, 3, 1 @ 2725
	pointillism_point 51, 42, 4, 2, 1 @ 2726
	pointillism_point 45, 48, 4, 3, 0 @ 2727
	pointillism_point 61, 55, 4, 3, 0 @ 2728
	pointillism_point 37, 17, 2, 0, 1 @ 2729
	pointillism_point 3, 5, 3, 0, 0 @ 2730
	pointillism_point 16, 4, 5, 0, 1 @ 2731
	pointillism_point 7, 46, 6, 3, 0 @ 2732
	pointillism_point 42, 41, 2, 2, 1 @ 2733
	pointillism_point 58, 14, 6, 1, 1 @ 2734
	pointillism_point 42, 6, 5, 0, 1 @ 2735
	pointillism_point 61, 1, 5, 0, 1 @ 2736
	pointillism_point 39, 14, 2, 3, 0 @ 2737
	pointillism_point 29, 40, 3, 1, 1 @ 2738
	pointillism_point 16, 51, 5, 1, 1 @ 2739
	pointillism_point 12, 20, 3, 2, 1 @ 2740
	pointillism_point 21, 63, 4, 2, 1 @ 2741
	pointillism_point 55, 35, 3, 3, 0 @ 2742
	pointillism_point 4, 44, 3, 2, 0 @ 2743
	pointillism_point 21, 52, 5, 1, 0 @ 2744
	pointillism_point 9, 47, 2, 2, 1 @ 2745
	pointillism_point 2, 63, 2, 2, 0 @ 2746
	pointillism_point 25, 44, 6, 1, 1 @ 2747
	pointillism_point 57, 50, 4, 0, 0 @ 2748
	pointillism_point 42, 24, 6, 1, 0 @ 2749
	pointillism_point 23, 35, 4, 0, 1 @ 2750
	pointillism_point 11, 45, 4, 2, 1 @ 2751
	pointillism_point 36, 58, 5, 2, 1 @ 2752
	pointillism_point 49, 63, 6, 2, 0 @ 2753
	pointillism_point 24, 25, 4, 2, 0 @ 2754
	pointillism_point 30, 21, 3, 1, 0 @ 2755
	pointillism_point 23, 51, 5, 1, 1 @ 2756
	pointillism_point 35, 9, 4, 3, 0 @ 2757
	pointillism_point 27, 13, 2, 2, 1 @ 2758
	pointillism_point 54, 38, 5, 0, 0 @ 2759
	pointillism_point 58, 28, 2, 2, 0 @ 2760
	pointillism_point 12, 62, 2, 0, 0 @ 2761
	pointillism_point 24, 6, 6, 2, 1 @ 2762
	pointillism_point 55, 38, 6, 3, 0 @ 2763
	pointillism_point 33, 38, 2, 3, 1 @ 2764
	pointillism_point 61, 28, 5, 2, 0 @ 2765
	pointillism_point 22, 37, 3, 2, 1 @ 2766
	pointillism_point 30, 11, 3, 3, 0 @ 2767
	pointillism_point 29, 13, 6, 1, 0 @ 2768
	pointillism_point 8, 31, 3, 1, 1 @ 2769
	pointillism_point 18, 28, 2, 1, 0 @ 2770
	pointillism_point 32, 42, 5, 0, 0 @ 2771
	pointillism_point 6, 59, 6, 2, 1 @ 2772
	pointillism_point 57, 14, 3, 3, 0 @ 2773
	pointillism_point 49, 48, 5, 0, 0 @ 2774
	pointillism_point 2, 33, 2, 2, 0 @ 2775
	pointillism_point 6, 30, 5, 0, 1 @ 2776
	pointillism_point 22, 9, 3, 2, 0 @ 2777
	pointillism_point 39, 50, 5, 2, 1 @ 2778
	pointillism_point 57, 3, 4, 3, 1 @ 2779
	pointillism_point 41, 9, 3, 3, 0 @ 2780
	pointillism_point 27, 17, 3, 2, 0 @ 2781
	pointillism_point 40, 58, 5, 2, 0 @ 2782
	pointillism_point 3, 3, 3, 0, 0 @ 2783
	pointillism_point 35, 9, 5, 3, 1 @ 2784
	pointillism_point 48, 23, 4, 1, 1 @ 2785
	pointillism_point 15, 37, 6, 1, 1 @ 2786
	pointillism_point 6, 36, 6, 3, 1 @ 2787
	pointillism_point 34, 9, 6, 1, 1 @ 2788
	pointillism_point 44, 9, 5, 1, 0 @ 2789
	pointillism_point 12, 18, 5, 1, 0 @ 2790
	pointillism_point 40, 32, 2, 0, 0 @ 2791
	pointillism_point 21, 41, 6, 1, 1 @ 2792
	pointillism_point 15, 26, 2, 1, 1 @ 2793
	pointillism_point 19, 24, 6, 3, 0 @ 2794
	pointillism_point 46, 22, 2, 1, 1 @ 2795
	pointillism_point 60, 26, 2, 2, 1 @ 2796
	pointillism_point 58, 17, 6, 1, 0 @ 2797
	pointillism_point 2, 10, 5, 2, 0 @ 2798
	pointillism_point 25, 57, 2, 0, 1 @ 2799
	pointillism_point 49, 62, 3, 2, 1 @ 2800
	pointillism_point 50, 20, 6, 1, 0 @ 2801
	pointillism_point 18, 46, 6, 2, 0 @ 2802
	pointillism_point 62, 54, 4, 1, 1 @ 2803
	pointillism_point 55, 62, 2, 2, 1 @ 2804
	pointillism_point 21, 53, 6, 2, 0 @ 2805
	pointillism_point 1, 58, 5, 2, 0 @ 2806
	pointillism_point 38, 37, 4, 1, 0 @ 2807
	pointillism_point 1, 43, 6, 3, 1 @ 2808
	pointillism_point 28, 61, 6, 1, 1 @ 2809
	pointillism_point 62, 16, 3, 2, 0 @ 2810
	pointillism_point 38, 51, 3, 0, 1 @ 2811
	pointillism_point 5, 25, 2, 3, 1 @ 2812
	pointillism_point 18, 56, 3, 2, 0 @ 2813
	pointillism_point 21, 60, 6, 1, 0 @ 2814
	pointillism_point 63, 15, 6, 3, 1 @ 2815
	pointillism_point 2, 57, 6, 1, 0 @ 2816
	pointillism_point 19, 0, 3, 2, 1 @ 2817
	pointillism_point 29, 44, 2, 0, 0 @ 2818
	pointillism_point 57, 19, 6, 0, 1 @ 2819
	pointillism_point 15, 55, 3, 0, 1 @ 2820
	pointillism_point 9, 13, 5, 1, 0 @ 2821
	pointillism_point 32, 47, 6, 1, 0 @ 2822
	pointillism_point 59, 52, 4, 1, 0 @ 2823
	pointillism_point 38, 20, 2, 0, 0 @ 2824
	pointillism_point 36, 61, 4, 1, 0 @ 2825
	pointillism_point 11, 49, 4, 1, 1 @ 2826
	pointillism_point 47, 45, 5, 1, 0 @ 2827
	pointillism_point 48, 4, 6, 2, 1 @ 2828
	pointillism_point 25, 32, 5, 1, 0 @ 2829
	pointillism_point 22, 54, 6, 3, 1 @ 2830
	pointillism_point 20, 40, 6, 3, 1 @ 2831
	pointillism_point 17, 11, 4, 3, 1 @ 2832
	pointillism_point 29, 6, 5, 0, 1 @ 2833
	pointillism_point 53, 22, 5, 3, 0 @ 2834
	pointillism_point 36, 46, 5, 0, 1 @ 2835
	pointillism_point 54, 20, 5, 1, 0 @ 2836
	pointillism_point 33, 12, 3, 3, 1 @ 2837
	pointillism_point 63, 57, 3, 0, 1 @ 2838
	pointillism_point 39, 16, 5, 1, 0 @ 2839
	pointillism_point 30, 18, 6, 2, 0 @ 2840
	pointillism_point 16, 36, 6, 2, 0 @ 2841
	pointillism_point 29, 19, 3, 2, 1 @ 2842
	pointillism_point 23, 22, 6, 3, 1 @ 2843
	pointillism_point 39, 27, 4, 3, 1 @ 2844
	pointillism_point 7, 36, 4, 0, 1 @ 2845
	pointillism_point 55, 33, 2, 0, 1 @ 2846
	pointillism_point 55, 40, 4, 2, 0 @ 2847
	pointillism_point 25, 2, 3, 2, 0 @ 2848
	pointillism_point 20, 18, 3, 2, 1 @ 2849
	pointillism_point 27, 36, 5, 3, 0 @ 2850
	pointillism_point 46, 58, 2, 2, 1 @ 2851
	pointillism_point 55, 52, 4, 0, 1 @ 2852
	pointillism_point 51, 45, 5, 0, 1 @ 2853
	pointillism_point 47, 30, 6, 2, 0 @ 2854
	pointillism_point 41, 60, 2, 1, 0 @ 2855
	pointillism_point 5, 21, 4, 0, 0 @ 2856
	pointillism_point 5, 62, 3, 0, 1 @ 2857
	pointillism_point 24, 11, 6, 0, 0 @ 2858
	pointillism_point 47, 2, 4, 3, 1 @ 2859
	pointillism_point 20, 28, 6, 2, 0 @ 2860
	pointillism_point 18, 32, 6, 0, 0 @ 2861
	pointillism_point 43, 34, 3, 1, 1 @ 2862
	pointillism_point 6, 49, 5, 0, 0 @ 2863
	pointillism_point 21, 45, 2, 1, 0 @ 2864
	pointillism_point 1, 14, 2, 1, 1 @ 2865
	pointillism_point 19, 12, 5, 0, 0 @ 2866
	pointillism_point 7, 42, 2, 2, 0 @ 2867
	pointillism_point 29, 54, 2, 2, 0 @ 2868
	pointillism_point 21, 43, 4, 3, 0 @ 2869
	pointillism_point 3, 37, 2, 2, 1 @ 2870
	pointillism_point 62, 59, 4, 0, 0 @ 2871
	pointillism_point 53, 12, 4, 2, 1 @ 2872
	pointillism_point 43, 22, 6, 2, 1 @ 2873
	pointillism_point 30, 49, 5, 2, 0 @ 2874
	pointillism_point 6, 3, 5, 0, 1 @ 2875
	pointillism_point 36, 7, 3, 3, 1 @ 2876
	pointillism_point 50, 47, 3, 0, 1 @ 2877
	pointillism_point 37, 33, 6, 0, 1 @ 2878
	pointillism_point 34, 38, 3, 2, 1 @ 2879
	pointillism_point 0, 27, 3, 0, 0 @ 2880
	pointillism_point 42, 36, 6, 0, 1 @ 2881
	pointillism_point 32, 6, 5, 3, 1 @ 2882
	pointillism_point 30, 50, 4, 3, 0 @ 2883
	pointillism_point 50, 57, 2, 1, 0 @ 2884
	pointillism_point 32, 1, 3, 0, 1 @ 2885
	pointillism_point 15, 21, 2, 2, 1 @ 2886
	pointillism_point 39, 16, 5, 3, 0 @ 2887
	pointillism_point 9, 37, 3, 0, 1 @ 2888
	pointillism_point 41, 55, 6, 0, 0 @ 2889
	pointillism_point 19, 28, 3, 2, 1 @ 2890
	pointillism_point 41, 45, 4, 3, 0 @ 2891
	pointillism_point 2, 26, 2, 3, 0 @ 2892
	pointillism_point 29, 43, 3, 2, 0 @ 2893
	pointillism_point 24, 4, 6, 2, 0 @ 2894
	pointillism_point 40, 42, 4, 0, 1 @ 2895
	pointillism_point 21, 27, 5, 3, 0 @ 2896
	pointillism_point 22, 1, 2, 0, 0 @ 2897
	pointillism_point 5, 9, 2, 2, 0 @ 2898
	pointillism_point 34, 3, 4, 1, 0 @ 2899
	pointillism_point 2, 27, 6, 2, 0 @ 2900
	pointillism_point 41, 42, 4, 1, 1 @ 2901
	pointillism_point 38, 54, 2, 1, 1 @ 2902
	pointillism_point 35, 61, 3, 1, 0 @ 2903
	pointillism_point 29, 16, 4, 2, 0 @ 2904
	pointillism_point 37, 43, 6, 3, 1 @ 2905
	pointillism_point 25, 36, 4, 3, 0 @ 2906
	pointillism_point 40, 19, 2, 3, 0 @ 2907
	pointillism_point 23, 20, 3, 0, 1 @ 2908
	pointillism_point 11, 47, 4, 2, 1 @ 2909
	pointillism_point 55, 52, 6, 3, 1 @ 2910
	pointillism_point 57, 33, 3, 1, 1 @ 2911
	pointillism_point 15, 61, 5, 2, 1 @ 2912
	pointillism_point 13, 16, 4, 0, 0 @ 2913
	pointillism_point 5, 11, 5, 2, 1 @ 2914
	pointillism_point 1, 18, 4, 2, 0 @ 2915
	pointillism_point 24, 61, 6, 1, 0 @ 2916
	pointillism_point 9, 33, 4, 3, 0 @ 2917
	pointillism_point 26, 14, 3, 3, 1 @ 2918
	pointillism_point 48, 6, 3, 3, 1 @ 2919
	pointillism_point 11, 60, 5, 0, 1 @ 2920
	pointillism_point 7, 62, 4, 3, 1 @ 2921
	pointillism_point 19, 30, 3, 1, 0 @ 2922
	pointillism_point 19, 7, 4, 1, 1 @ 2923
	pointillism_point 16, 52, 3, 3, 0 @ 2924
	pointillism_point 50, 23, 4, 1, 1 @ 2925
	pointillism_point 53, 22, 6, 0, 1 @ 2926
	pointillism_point 50, 46, 3, 1, 1 @ 2927
	pointillism_point 40, 14, 4, 1, 0 @ 2928
	pointillism_point 20, 58, 4, 1, 1 @ 2929
	pointillism_point 34, 3, 5, 0, 1 @ 2930
	pointillism_point 42, 16, 4, 0, 0 @ 2931
	pointillism_point 62, 60, 4, 3, 1 @ 2932
	pointillism_point 22, 32, 2, 1, 0 @ 2933
	pointillism_point 63, 36, 6, 0, 1 @ 2934
	pointillism_point 13, 46, 6, 1, 0 @ 2935
	pointillism_point 47, 23, 5, 2, 1 @ 2936
	pointillism_point 54, 59, 2, 3, 1 @ 2937
	pointillism_point 36, 35, 3, 0, 0 @ 2938
	pointillism_point 55, 29, 2, 1, 1 @ 2939
	pointillism_point 23, 58, 3, 1, 0 @ 2940
	pointillism_point 10, 61, 3, 3, 0 @ 2941
	pointillism_point 5, 18, 2, 3, 0 @ 2942
	pointillism_point 51, 50, 4, 2, 1 @ 2943
	pointillism_point 29, 31, 5, 0, 1 @ 2944
	pointillism_point 52, 44, 4, 3, 0 @ 2945
	pointillism_point 32, 41, 6, 2, 1 @ 2946
	pointillism_point 14, 50, 2, 3, 1 @ 2947
	pointillism_point 1, 57, 5, 2, 1 @ 2948
	pointillism_point 39, 36, 4, 1, 1 @ 2949
	pointillism_point 40, 63, 3, 0, 0 @ 2950
	pointillism_point 57, 56, 4, 2, 1 @ 2951
	pointillism_point 35, 17, 2, 0, 1 @ 2952
	pointillism_point 25, 44, 5, 0, 1 @ 2953
	pointillism_point 48, 8, 5, 0, 0 @ 2954
	pointillism_point 37, 39, 3, 2, 1 @ 2955
	pointillism_point 23, 37, 4, 0, 1 @ 2956
	pointillism_point 9, 61, 2, 3, 0 @ 2957
	pointillism_point 27, 15, 5, 2, 0 @ 2958
	pointillism_point 27, 18, 4, 1, 0 @ 2959
	pointillism_point 40, 62, 4, 3, 0 @ 2960
	pointillism_point 52, 16, 3, 1, 1 @ 2961
	pointillism_point 2, 52, 2, 2, 1 @ 2962
	pointillism_point 26, 41, 3, 0, 1 @ 2963
	pointillism_point 41, 17, 6, 0, 1 @ 2964
	pointillism_point 18, 39, 2, 3, 1 @ 2965
	pointillism_point 39, 39, 5, 3, 1 @ 2966
	pointillism_point 52, 39, 4, 2, 0 @ 2967
	pointillism_point 3, 25, 6, 3, 0 @ 2968
	pointillism_point 23, 29, 6, 1, 1 @ 2969
	pointillism_point 25, 37, 3, 1, 0 @ 2970
	pointillism_point 43, 57, 2, 1, 1 @ 2971
	pointillism_point 59, 51, 3, 2, 1 @ 2972
	pointillism_point 39, 49, 6, 2, 0 @ 2973
	pointillism_point 40, 51, 6, 3, 1 @ 2974
	pointillism_point 9, 48, 3, 1, 1 @ 2975
	pointillism_point 3, 58, 4, 3, 1 @ 2976
	pointillism_point 25, 17, 3, 3, 1 @ 2977
	pointillism_point 11, 26, 6, 2, 0 @ 2978
	pointillism_point 61, 42, 2, 2, 1 @ 2979
	pointillism_point 4, 36, 6, 3, 0 @ 2980
	pointillism_point 48, 35, 6, 0, 0 @ 2981
	pointillism_point 15, 34, 3, 1, 1 @ 2982
	pointillism_point 61, 61, 4, 2, 0 @ 2983
	pointillism_point 41, 29, 2, 1, 0 @ 2984
	pointillism_point 22, 25, 5, 3, 0 @ 2985
	pointillism_point 3, 18, 2, 3, 1 @ 2986
	pointillism_point 24, 37, 6, 1, 1 @ 2987
	pointillism_point 47, 35, 3, 1, 0 @ 2988
	pointillism_point 26, 53, 4, 3, 1 @ 2989
	pointillism_point 33, 38, 3, 0, 1 @ 2990
	pointillism_point 27, 48, 3, 0, 0 @ 2991
	pointillism_point 43, 34, 5, 2, 1 @ 2992
	pointillism_point 44, 26, 6, 2, 0 @ 2993
	pointillism_point 62, 18, 3, 0, 1 @ 2994
	pointillism_point 40, 39, 2, 2, 1 @ 2995
	pointillism_point 27, 17, 2, 1, 0 @ 2996
	pointillism_point 23, 21, 2, 0, 0 @ 2997
	pointillism_point 52, 55, 4, 2, 1 @ 2998
	pointillism_point 18, 63, 2, 2, 1 @ 2999
	pointillism_point 49, 13, 6, 3, 1 @ 3000
	pointillism_point 62, 42, 5, 2, 1 @ 3001
	pointillism_point 15, 36, 4, 2, 0 @ 3002
	pointillism_point 60, 63, 3, 3, 1 @ 3003
	pointillism_point 29, 52, 2, 3, 1 @ 3004
	pointillism_point 26, 35, 3, 3, 1 @ 3005
	pointillism_point 55, 15, 2, 0, 0 @ 3006
	pointillism_point 50, 52, 6, 2, 1 @ 3007
	pointillism_point 25, 5, 4, 1, 0 @ 3008
	pointillism_point 51, 22, 6, 2, 0 @ 3009
	pointillism_point 30, 20, 3, 3, 0 @ 3010
	pointillism_point 8, 19, 5, 0, 1 @ 3011
	pointillism_point 58, 55, 6, 0, 0 @ 3012
	pointillism_point 29, 54, 2, 2, 1 @ 3013
	pointillism_point 41, 46, 3, 2, 1 @ 3014
	pointillism_point 50, 46, 4, 1, 1 @ 3015
	pointillism_point 53, 23, 3, 2, 0 @ 3016
	pointillism_point 54, 29, 2, 1, 1 @ 3017
	pointillism_point 35, 52, 6, 2, 0 @ 3018
	pointillism_point 36, 26, 6, 3, 1 @ 3019
	pointillism_point 47, 38, 5, 3, 0 @ 3020
	pointillism_point 30, 23, 3, 1, 0 @ 3021
	pointillism_point 31, 21, 3, 3, 1 @ 3022
	pointillism_point 43, 31, 3, 0, 1 @ 3023
	pointillism_point 10, 51, 3, 1, 0 @ 3024
	pointillism_point 53, 49, 4, 2, 0 @ 3025
	pointillism_point 45, 23, 5, 2, 0 @ 3026
	pointillism_point 12, 33, 6, 3, 0 @ 3027
	pointillism_point 44, 53, 6, 2, 1 @ 3028
	pointillism_point 27, 3, 4, 3, 1 @ 3029
	pointillism_point 1, 13, 3, 2, 1 @ 3030
	pointillism_point 28, 14, 2, 0, 1 @ 3031
	pointillism_point 17, 43, 2, 0, 0 @ 3032
	pointillism_point 37, 59, 4, 0, 0 @ 3033
	pointillism_point 31, 23, 3, 0, 1 @ 3034
	pointillism_point 32, 8, 6, 3, 0 @ 3035
	pointillism_point 19, 56, 3, 0, 1 @ 3036
	pointillism_point 27, 43, 4, 2, 0 @ 3037
	pointillism_point 11, 31, 5, 0, 1 @ 3038
	pointillism_point 39, 21, 5, 2, 0 @ 3039
	pointillism_point 55, 57, 2, 0, 0 @ 3040
	pointillism_point 58, 21, 5, 3, 0 @ 3041
	pointillism_point 47, 17, 6, 3, 0 @ 3042
	pointillism_point 36, 4, 4, 0, 0 @ 3043
	pointillism_point 59, 42, 6, 2, 1 @ 3044
	pointillism_point 39, 53, 6, 2, 0 @ 3045
	pointillism_point 13, 27, 4, 0, 0 @ 3046
	pointillism_point 16, 34, 6, 3, 1 @ 3047
	pointillism_point 31, 56, 4, 3, 1 @ 3048
	pointillism_point 49, 15, 5, 0, 0 @ 3049
	pointillism_point 40, 37, 2, 2, 1 @ 3050
	pointillism_point 0, 29, 4, 2, 1 @ 3051
	pointillism_point 49, 40, 5, 0, 0 @ 3052
	pointillism_point 11, 58, 3, 2, 1 @ 3053
	pointillism_point 45, 19, 3, 1, 1 @ 3054
	pointillism_point 3, 55, 5, 3, 0 @ 3055
	pointillism_point 29, 40, 3, 0, 1 @ 3056
	pointillism_point 8, 45, 4, 1, 0 @ 3057
	pointillism_point 39, 57, 6, 1, 0 @ 3058
	pointillism_point 63, 47, 3, 2, 1 @ 3059
	pointillism_point 51, 52, 5, 0, 0 @ 3060
	pointillism_point 24, 8, 6, 0, 1 @ 3061
	pointillism_point 35, 31, 2, 1, 1 @ 3062
	pointillism_point 13, 44, 4, 1, 1 @ 3063
	pointillism_point 58, 45, 3, 1, 0 @ 3064
	pointillism_point 2, 37, 2, 1, 1 @ 3065
	pointillism_point 32, 54, 6, 2, 0 @ 3066
	pointillism_point 18, 43, 5, 2, 1 @ 3067
	pointillism_point 53, 53, 6, 2, 0 @ 3068
	pointillism_point 35, 32, 4, 0, 1 @ 3069
	pointillism_point 58, 25, 3, 1, 1 @ 3070
	pointillism_point 31, 43, 3, 0, 1 @ 3071
	pointillism_point 53, 14, 3, 0, 1 @ 3072
	pointillism_point 38, 36, 6, 3, 1 @ 3073
	pointillism_point 24, 8, 2, 0, 0 @ 3074
	pointillism_point 12, 22, 5, 2, 1 @ 3075
	pointillism_point 31, 52, 4, 0, 1 @ 3076
	pointillism_point 5, 56, 3, 0, 1 @ 3077
	pointillism_point 20, 33, 4, 2, 0 @ 3078
	pointillism_point 17, 49, 2, 2, 0 @ 3079
	pointillism_point 62, 56, 5, 0, 1 @ 3080
	pointillism_point 63, 8, 4, 2, 1 @ 3081
	pointillism_point 42, 31, 4, 2, 1 @ 3082
	pointillism_point 37, 6, 5, 0, 0 @ 3083
	pointillism_point 11, 30, 2, 2, 0 @ 3084
	pointillism_point 26, 56, 4, 1, 0 @ 3085
	pointillism_point 36, 24, 5, 0, 1 @ 3086
	pointillism_point 26, 17, 4, 0, 0 @ 3087
	pointillism_point 59, 58, 3, 3, 0 @ 3088
	pointillism_point 28, 38, 3, 1, 0 @ 3089
	pointillism_point 5, 50, 3, 0, 1 @ 3090
	pointillism_point 57, 42, 6, 0, 1 @ 3091
	pointillism_point 9, 7, 4, 2, 1 @ 3092
	pointillism_point 5, 62, 2, 3, 0 @ 3093
	pointillism_point 52, 38, 2, 2, 0 @ 3094
	pointillism_point 27, 50, 4, 3, 0 @ 3095
	pointillism_point 5, 8, 6, 3, 1 @ 3096
	pointillism_point 15, 3, 4, 0, 0 @ 3097
	pointillism_point 42, 57, 6, 0, 1 @ 3098
	pointillism_point 8, 1, 3, 3, 0 @ 3099
	pointillism_point 29, 35, 6, 0, 1 @ 3100
	pointillism_point 40, 27, 5, 0, 0 @ 3101
	pointillism_point 30, 55, 2, 2, 0 @ 3102
	pointillism_point 19, 14, 5, 0, 0 @ 3103
	pointillism_point 42, 59, 6, 3, 1 @ 3104
	pointillism_point 47, 28, 5, 0, 0 @ 3105
	pointillism_point 48, 48, 3, 1, 0 @ 3106
	pointillism_point 54, 31, 2, 3, 0 @ 3107
	pointillism_point 62, 13, 2, 2, 1 @ 3108
	pointillism_point 46, 22, 3, 0, 0 @ 3109
	pointillism_point 21, 55, 4, 0, 0 @ 3110
	pointillism_point 42, 51, 6, 0, 0 @ 3111
	pointillism_point 43, 14, 4, 2, 1 @ 3112
	pointillism_point 24, 32, 2, 3, 0 @ 3113
	pointillism_point 2, 25, 4, 2, 1 @ 3114
	pointillism_point 10, 46, 6, 0, 0 @ 3115
	pointillism_point 22, 3, 2, 0, 1 @ 3116
	pointillism_point 4, 39, 4, 2, 1 @ 3117
	pointillism_point 27, 28, 4, 0, 1 @ 3118
	pointillism_point 41, 4, 4, 3, 1 @ 3119
	pointillism_point 61, 32, 3, 3, 0 @ 3120
	pointillism_point 40, 51, 6, 0, 1 @ 3121
	pointillism_point 30, 57, 2, 0, 0 @ 3122
	pointillism_point 49, 41, 3, 3, 0 @ 3123
	pointillism_point 6, 37, 5, 0, 0 @ 3124
	pointillism_point 25, 59, 2, 1, 0 @ 3125
	pointillism_point 11, 27, 3, 2, 0 @ 3126
	pointillism_point 62, 55, 4, 0, 0 @ 3127
	pointillism_point 10, 55, 6, 1, 1 @ 3128
	pointillism_point 2, 44, 4, 2, 1 @ 3129
	pointillism_point 21, 24, 2, 2, 0 @ 3130
	pointillism_point 59, 32, 3, 2, 0 @ 3131
	pointillism_point 34, 59, 3, 2, 0 @ 3132
	pointillism_point 36, 52, 6, 2, 1 @ 3133
	pointillism_point 15, 47, 6, 0, 1 @ 3134
	pointillism_point 59, 23, 6, 2, 1 @ 3135
	pointillism_point 48, 57, 6, 3, 1 @ 3136
	pointillism_point 13, 21, 2, 0, 1 @ 3137
	pointillism_point 16, 3, 3, 3, 0 @ 3138
	pointillism_point 26, 57, 6, 1, 1 @ 3139
	pointillism_point 47, 46, 5, 0, 0 @ 3140
	pointillism_point 28, 40, 6, 3, 0 @ 3141
	pointillism_point 40, 24, 3, 3, 1 @ 3142
	pointillism_point 21, 1, 6, 0, 0 @ 3143
	pointillism_point 62, 50, 5, 0, 0 @ 3144
	pointillism_point 52, 47, 4, 1, 1 @ 3145
	pointillism_point 7, 12, 6, 3, 0 @ 3146
	pointillism_point 40, 44, 6, 2, 0 @ 3147
	pointillism_point 42, 12, 3, 3, 1 @ 3148
	pointillism_point 63, 32, 2, 1, 1 @ 3149
	pointillism_point 43, 23, 4, 3, 1 @ 3150
	pointillism_point 40, 41, 5, 1, 0 @ 3151
	pointillism_point 60, 19, 6, 3, 0 @ 3152
	pointillism_point 38, 45, 5, 1, 0 @ 3153
	pointillism_point 10, 6, 3, 3, 0 @ 3154
	pointillism_point 32, 4, 3, 1, 0 @ 3155
	pointillism_point 2, 7, 6, 2, 1 @ 3156
	pointillism_point 14, 24, 6, 0, 0 @ 3157
	pointillism_point 0, 52, 6, 2, 0 @ 3158
	pointillism_point 47, 20, 6, 3, 1 @ 3159
	pointillism_point 33, 48, 3, 3, 1 @ 3160
	pointillism_point 21, 55, 3, 1, 1 @ 3161
	pointillism_point 58, 11, 6, 1, 0 @ 3162
	pointillism_point 34, 34, 4, 0, 1 @ 3163
	pointillism_point 27, 53, 4, 1, 1 @ 3164
	pointillism_point 13, 3, 3, 2, 0 @ 3165
	pointillism_point 35, 59, 2, 1, 1 @ 3166
	pointillism_point 14, 29, 3, 3, 1 @ 3167
	pointillism_point 29, 63, 5, 3, 0 @ 3168
	pointillism_point 57, 39, 5, 3, 0 @ 3169
	pointillism_point 15, 56, 4, 0, 0 @ 3170
	pointillism_point 49, 60, 6, 2, 1 @ 3171
	pointillism_point 11, 15, 5, 3, 0 @ 3172
	pointillism_point 6, 6, 5, 0, 0 @ 3173
	pointillism_point 37, 57, 4, 1, 1 @ 3174
	pointillism_point 10, 50, 2, 2, 1 @ 3175
	pointillism_point 15, 29, 4, 2, 1 @ 3176
	pointillism_point 12, 13, 6, 2, 0 @ 3177
	pointillism_point 18, 46, 4, 0, 1 @ 3178
	pointillism_point 54, 24, 3, 3, 1 @ 3179
	pointillism_point 31, 52, 3, 1, 1 @ 3180
	pointillism_point 5, 58, 6, 3, 0 @ 3181
	pointillism_point 43, 1, 2, 3, 1 @ 3182
	pointillism_point 14, 22, 5, 1, 1 @ 3183
	pointillism_point 14, 11, 4, 3, 0 @ 3184
	pointillism_point 13, 45, 2, 0, 0 @ 3185
	pointillism_point 33, 17, 4, 3, 1 @ 3186
	pointillism_point 61, 19, 6, 1, 0 @ 3187
	pointillism_point 21, 37, 5, 1, 0 @ 3188
	pointillism_point 27, 45, 6, 2, 1 @ 3189
	pointillism_point 44, 43, 4, 3, 0 @ 3190
	pointillism_point 38, 31, 4, 0, 0 @ 3191
	pointillism_point 34, 43, 2, 1, 0 @ 3192
	pointillism_point 63, 61, 4, 3, 1 @ 3193
	pointillism_point 48, 10, 6, 3, 0 @ 3194
	pointillism_point 53, 31, 2, 3, 1 @ 3195
	pointillism_point 33, 8, 5, 0, 1 @ 3196
	pointillism_point 29, 32, 6, 1, 1 @ 3197
	pointillism_point 52, 17, 2, 3, 0 @ 3198
	pointillism_point 5, 56, 5, 2, 1 @ 3199
.purgem pointillism_point
