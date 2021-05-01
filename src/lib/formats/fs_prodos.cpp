// license:BSD-3-Clause
// copyright-holders:Olivier Galibert

// Creation of Apple ProDOS floppy images

#include "emu.h"
#include "fs_prodos.h"
#include "ap_dsk35.h"

const u8 fs_prodos::impl::boot[512] = {
	0x01, 0x38, 0xb0, 0x03, 0x4c, 0x1c, 0x09, 0x78, 0x86, 0x43, 0xc9, 0x03, 0x08, 0x8a, 0x29, 0x70,
	0x4a, 0x4a, 0x4a, 0x4a, 0x09, 0xc0, 0x85, 0x49, 0xa0, 0xff, 0x84, 0x48, 0x28, 0xc8, 0xb1, 0x48,
	0xd0, 0x3a, 0xb0, 0x0e, 0xa9, 0x03, 0x8d, 0x00, 0x08, 0xe6, 0x3d, 0xa5, 0x49, 0x48, 0xa9, 0x5b,
	0x48, 0x60, 0x85, 0x40, 0x85, 0x48, 0xa0, 0x5e, 0xb1, 0x48, 0x99, 0x94, 0x09, 0xc8, 0xc0, 0xeb,
	0xd0, 0xf6, 0xa2, 0x06, 0xbc, 0x32, 0x09, 0xbd, 0x39, 0x09, 0x99, 0xf2, 0x09, 0xbd, 0x40, 0x09,
	0x9d, 0x7f, 0x0a, 0xca, 0x10, 0xee, 0xa9, 0x09, 0x85, 0x49, 0xa9, 0x86, 0xa0, 0x00, 0xc9, 0xf9,
	0xb0, 0x2f, 0x85, 0x48, 0x84, 0x60, 0x84, 0x4a, 0x84, 0x4c, 0x84, 0x4e, 0x84, 0x47, 0xc8, 0x84,
	0x42, 0xc8, 0x84, 0x46, 0xa9, 0x0c, 0x85, 0x61, 0x85, 0x4b, 0x20, 0x27, 0x09, 0xb0, 0x66, 0xe6,
	0x61, 0xe6, 0x61, 0xe6, 0x46, 0xa5, 0x46, 0xc9, 0x06, 0x90, 0xef, 0xad, 0x00, 0x0c, 0x0d, 0x01,
	0x0c, 0xd0, 0x52, 0xa9, 0x04, 0xd0, 0x02, 0xa5, 0x4a, 0x18, 0x6d, 0x23, 0x0c, 0xa8, 0x90, 0x0d,
	0xe6, 0x4b, 0xa5, 0x4b, 0x4a, 0xb0, 0x06, 0xc9, 0x0a, 0xf0, 0x71, 0xa0, 0x04, 0x84, 0x4a, 0xad,
	0x20, 0x09, 0x29, 0x0f, 0xa8, 0xb1, 0x4a, 0xd9, 0x20, 0x09, 0xd0, 0xdb, 0x88, 0x10, 0xf6, 0xa0,
	0x16, 0xb1, 0x4a, 0x4a, 0x6d, 0x1f, 0x09, 0x8d, 0x1f, 0x09, 0xa0, 0x11, 0xb1, 0x4a, 0x85, 0x46,
	0xc8, 0xb1, 0x4a, 0x85, 0x47, 0xa9, 0x00, 0x85, 0x4a, 0xa0, 0x1e, 0x84, 0x4b, 0x84, 0x61, 0xc8,
	0x84, 0x4d, 0x20, 0x27, 0x09, 0xb0, 0x35, 0xe6, 0x61, 0xe6, 0x61, 0xa4, 0x4e, 0xe6, 0x4e, 0xb1,
	0x4a, 0x85, 0x46, 0xb1, 0x4c, 0x85, 0x47, 0x11, 0x4a, 0xd0, 0x18, 0xa2, 0x01, 0xa9, 0x00, 0xa8,
	0x91, 0x60, 0xc8, 0xd0, 0xfb, 0xe6, 0x61, 0xea, 0xea, 0xca, 0x10, 0xf4, 0xce, 0x1f, 0x09, 0xf0,
	0x07, 0xd0, 0xd8, 0xce, 0x1f, 0x09, 0xd0, 0xca, 0x58, 0x4c, 0x00, 0x20, 0x4c, 0x47, 0x09, 0x02,
	0x26, 0x50, 0x52, 0x4f, 0x44, 0x4f, 0x53, 0xa5, 0x60, 0x85, 0x44, 0xa5, 0x61, 0x85, 0x45, 0x6c,
	0x48, 0x00, 0x08, 0x1e, 0x24, 0x3f, 0x45, 0x47, 0x76, 0xf4, 0xd7, 0xd1, 0xb6, 0x4b, 0xb4, 0xac,
	0xa6, 0x2b, 0x18, 0x60, 0x4c, 0xbc, 0x09, 0x20, 0x58, 0xfc, 0xa0, 0x14, 0xb9, 0x58, 0x09, 0x99,
	0xb1, 0x05, 0x88, 0x10, 0xf7, 0x4c, 0x55, 0x09, 0xd5, 0xce, 0xc1, 0xc2, 0xcc, 0xc5, 0xa0, 0xd4,
	0xcf, 0xa0, 0xcc, 0xcf, 0xc1, 0xc4, 0xa0, 0xd0, 0xd2, 0xcf, 0xc4, 0xcf, 0xd3, 0xa5, 0x53, 0x29,
	0x03, 0x2a, 0x05, 0x2b, 0xaa, 0xbd, 0x80, 0xc0, 0xa9, 0x2c, 0xa2, 0x11, 0xca, 0xd0, 0xfd, 0xe9,
	0x01, 0xd0, 0xf7, 0xa6, 0x2b, 0x60, 0xa5, 0x46, 0x29, 0x07, 0xc9, 0x04, 0x29, 0x03, 0x08, 0x0a,
	0x28, 0x2a, 0x85, 0x3d, 0xa5, 0x47, 0x4a, 0xa5, 0x46, 0x6a, 0x4a, 0x4a, 0x85, 0x41, 0x0a, 0x85,
	0x51, 0xa5, 0x45, 0x85, 0x27, 0xa6, 0x2b, 0xbd, 0x89, 0xc0, 0x20, 0xbc, 0x09, 0xe6, 0x27, 0xe6,
	0x3d, 0xe6, 0x3d, 0xb0, 0x03, 0x20, 0xbc, 0x09, 0xbc, 0x88, 0xc0, 0x60, 0xa5, 0x40, 0x0a, 0x85,
	0x53, 0xa9, 0x00, 0x85, 0x54, 0xa5, 0x53, 0x85, 0x50, 0x38, 0xe5, 0x51, 0xf0, 0x14, 0xb0, 0x04,
	0xe6, 0x53, 0x90, 0x02, 0xc6, 0x53, 0x38, 0x20, 0x6d, 0x09, 0xa5, 0x50, 0x18, 0x20, 0x6f, 0x09,
	0xd0, 0xe3, 0xa0, 0x7f, 0x84, 0x52, 0x08, 0x28, 0x38, 0xc6, 0x52, 0xf0, 0xce, 0x18, 0x08, 0x88,
	0xf0, 0xf5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

void fs_prodos::enumerate_f(floppy_enumerator &fe, uint32_t form_factor, const std::vector<uint32_t> &variants) const
{
	if(has(form_factor, variants, floppy_image::FF_35, floppy_image::DSDD))
		fe.add(this, FLOPPY_APPLE_GCR_FORMAT, 819200, "prodos_800k", "Apple ProDOS 800K");
	if(has(form_factor, variants, floppy_image::FF_35, floppy_image::SSDD))
		fe.add(this, FLOPPY_APPLE_GCR_FORMAT, 409600, "prodos_400k", "Apple ProDOS 400K");
}

std::unique_ptr<filesystem_t> fs_prodos::mount(fsblk_t &blockdev) const
{
	return std::make_unique<impl>(blockdev);
}

bool fs_prodos::can_format() const
{
	return true;
}

bool fs_prodos::can_read() const
{
	return false;
}

bool fs_prodos::can_write() const
{
	return false;
}

char fs_prodos::directory_separator() const
{
	return '/';
}

std::vector<fs_meta_description> fs_prodos::volume_meta_description() const
{
	std::vector<fs_meta_description> res;
	res.emplace_back(fs_meta_description(fs_meta_name::name, fs_meta_type::string, "UNTITLED", false, [](const fs_meta &m) { std::string n = std::get<std::string>(m); return n.size() <= 15; }, "Volume name, up to 15 characters"));

	return res;
}

std::vector<fs_meta_description> fs_prodos::file_meta_description() const
{
	std::vector<fs_meta_description> res;
	return res;
}

std::vector<fs_meta_description> fs_prodos::directory_meta_description() const
{
	std::vector<fs_meta_description> res;
	return res;
}

void fs_prodos::impl::format(const fs_meta_data &meta)
{
	std::string volume_name = std::get<std::string>(meta.find(fs_meta_name::name)->second);
	u32 blocks = m_blockdev.block_count();

	m_blockdev.get(0).copy(0x000, boot, 0x200);               // Standard ProDOS boot sector as written by a 2gs
	m_blockdev.get(1).fill(0x00);                             // No SOS boot sector

	auto kblk1 = m_blockdev.get(2);                           // key block first block
	auto kblk2 = m_blockdev.get(3);                           // key block second block
	auto kblk3 = m_blockdev.get(4);                           // key block third block
	auto kblk4 = m_blockdev.get(5);                           // key block fourth block

	kblk1.w16l(0x00, 0x0000);                                 // Backwards key block pointer (null)
	kblk1.w16l(0x02, 0x0003);                                 // Forwards key block pointer
	kblk1.w8  (0x04, 0xf0 | volume_name.size());              // Block type (f, key block) and name size
	kblk1.wstr(0x05, volume_name);                            // Volume name, up to 15 characters
	kblk1.w32b(0x16, 0x642a250d);                             // ??? date & time
	kblk1.w16b(0x1a, 0x80ff);                                 // ???
	kblk1.w32b(0x1c, 0x642a250d);                             // Creation date & time
	kblk1.w8  (0x20, 0x05);                                   // ProDOS version (2gs)
	kblk1.w8  (0x21, 0x00);                                   // ProDOS minimum version
	kblk1.w8  (0x22, 0xc3);                                   // Allowed access (destroy, rename, !backup, 3x0, write read)
	kblk1.w8  (0x23, 0x27);                                   // Directory entry length (fixed)
	kblk1.w8  (0x24, 0x0d);                                   // Entries per block (fixed)
	kblk1.w16l(0x25, 0x0000);                                 // Number of file entries in the directory
	kblk1.w16l(0x27, 0x0006);                                 // Bitmap block pointer
	kblk1.w16l(0x29, blocks);                                 // Number of blocks

	kblk2.w16l(0x00, 0x0002);                                 // Backwards block pointer of the second volume block
	kblk2.w16l(0x02, 0x0004);                                 // Forwards block pointer of the second volume block
	kblk3.w16l(0x00, 0x0003);                                 // Backwards block pointer of the third volume block
	kblk3.w16l(0x02, 0x0005);                                 // Forwards block pointer of the third volume block
	kblk4.w16l(0x00, 0x0004);                                 // Backwards block pointer of the fourth volume block
	kblk4.w16l(0x02, 0x0000);                                 // Forwards block pointer of the fourth volume block (null)

	auto fmap = m_blockdev.get(6);
	u8 *fdata = fmap.data();
	// Mark blocks 7 to max as free
	for(u32 i = 7; i != blocks; i++)
		fdata[i >> 3] |= 0x80 >> (i & 7);
}

const filesystem_manager_type FS_PRODOS = &filesystem_manager_creator<fs_prodos>;;
